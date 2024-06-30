#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QMenuBar>
#include <QMenu>
#include <QMessageBox>
#include <QFile>
#include <QDir>
#include <QTextStream>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    myFit = new FitPlan;
    myFit->close();

    myKu = new dongzuoku;
    myKu->close();




    this->setWindowTitle("登录");
    ui->menuBar->close();
    ui->stackedWidget->setCurrentWidget(ui->page1);
    //登录（page1）


    sex=1,aim=1,uWeight=0;
    uName="";


    ui->man->setChecked(true);//默认为男
    ui->radioButton_3->setChecked(true);//默认为增肌

    connect(ui->man,ui->woman->clicked,[&](){
        sex=1;
        ui->man_2->setChecked(true);
    });
    connect(ui->woman,ui->woman->clicked,[&](){
        sex=2;
        ui->woman_2->setChecked(true);
    });

    connect(ui->man_2,ui->woman_2->clicked,[&](){
        sex=1;
    });
    connect(ui->woman_2,ui->woman_2->clicked,[&](){
        sex=2;
    });



    connect(ui->radioButton_3,ui->radioButton_3->clicked,[&](){
        aim=1;
        ui->radioButton_6->setChecked(true);
    });
    connect(ui->radioButton_4,ui->radioButton_4->clicked,[&](){
        aim=2;
        ui->radioButton_7->setChecked(true);
    });
    connect(ui->radioButton_5,ui->radioButton_5->clicked,[&](){
        aim=3;
        ui->radioButton_8->setChecked(true);
    });

    connect(ui->radioButton_6,ui->radioButton_6->clicked,[&](){
        aim=1;
    });
    connect(ui->radioButton_7,ui->radioButton_7->clicked,[&](){
        aim=2;
    });
    connect(ui->radioButton_8,ui->radioButton_8->clicked,[&](){
        aim=3;
    });
    //个人信息填写 男女 健身目标 体重


    connect(ui->regist,ui->regist->clicked,[=](){
        ui->stackedWidget->setCurrentWidget(ui->page2);
        this->setWindowTitle("注册");
    });
    connect(ui->back2,ui->back2->clicked,[=](){
        ui->stackedWidget->setCurrentWidget(ui->page1);
        this->setWindowTitle("登录");
    });
    connect(ui->next2,ui->next2->clicked,[=](){
        ui->stackedWidget->setCurrentWidget(ui->page3);
        this->setWindowTitle("注册");
    });
    connect(ui->back3,ui->back2->clicked,[=](){
        ui->stackedWidget->setCurrentWidget(ui->page2);
        this->setWindowTitle("注册");
    });
    //填写个人信息 注册（page2 page3）



    connect(ui->login,ui->login->clicked,[&](){
        QString userName = ui->userNameEdit->text();
        QString keyWord = ui->keyWordEdit->text();

        QDir currentDir = QDir::current();
        if (!currentDir.cd("data")) {
             qDebug() << "Failed to enter folder: " << "data";
             return ;
         }
        QString folderName = userName;
        if (!currentDir.exists(folderName)) {
            QMessageBox::critical(this,"用户不存在","错误");
            return ;
        }
        if (!currentDir.cd(folderName)) {
            qDebug() << "Failed to enter folder: " << folderName;
            return ;
        }

        QString filePath = currentDir.filePath("user_data.txt");
        QFile file(filePath);

        if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
        {
            qDebug() << "Could not open file";
            return ;
        }

        QTextStream in(&file);
        //qDebug()<<"!!!!!!"<< uName <<' ' <<uWeight<<' '<<sex<<' '<<aim<<endl;

        QString line = in.readLine();
        QStringList userIm = line.split(" ");
        if(userName==userIm[0]){
            if(userIm[1]!=keyWord){
                QMessageBox::critical(this,"密码输入不正确","错误");
                file.close();
                return ;
            }
        }
        uName = userName;
        uWord = keyWord;
        uWeight = userIm[2].toInt();
        sex = userIm[3].toInt();
        aim = userIm[4].toInt();

        ui->weightEdit_2->setText(userIm[2]);

        if(sex==1)ui->man_2->setChecked(true);
        if(sex==2)ui->woman_2->setChecked(true);

        if(aim==1)ui->radioButton_6->setChecked(true);
        if(aim==2)ui->radioButton_7->setChecked(true);
        if(aim==3)ui->radioButton_8->setChecked(true);

        file.close();



        //打开计划 日记
        QString filePath1 = currentDir.filePath("plan.txt");
        QString filePath2 = currentDir.filePath("edit.txt");

        myFit->planString = filePath1;
        myFit->planInit();

        myFit->editString = filePath2;
        myFit->editInit();



        ui->stackedWidget->setCurrentWidget(ui->page4);
        this->setWindowTitle("主界面");
        ui->menuBar->show();
    });
    // 登录


    connect(ui->next3,ui->next3->clicked,[=](){
        QString userName = ui->userNameEdit_2->text();
        QString keyWord1 = ui->keyWordEdit_2->text();
        QString keyWord2 = ui->keyWordEdit_3->text();
        int weight = ui->weightEdit->text().toInt();


        if(keyWord1!=keyWord2){
            QMessageBox::critical(this,"两次密码输入不匹配","错误");
            return ;
        }


        //按照 userName keyWord weight sex aim 的顺序保存用户信息
        QDir currentDir = QDir::current();
        if (!currentDir.cd("data")) {
             qDebug() << "Failed to enter folder: " << "data";
             return ;
         }
        QString folderName = userName;
        if (!currentDir.exists(folderName)) {
            if (!currentDir.mkdir(folderName)) {
                qDebug() << "Failed to create folder: " << folderName;
                return ;
            }
        }
        if (!currentDir.cd(folderName)) {
            qDebug() << "Failed to enter folder: " << folderName;
            return ;
        }

        QString filePath = currentDir.filePath("user_data.txt");
        QFile file(filePath);

        if (file.open(QIODevice::WriteOnly | QIODevice::Append |QIODevice::Text)) {
            QTextStream out(&file);
            out<<userName<<' ' <<keyWord1<< ' ' << weight << ' ' <<sex<<' '<<aim<< ' '<<endl;
            uName = userName;
            uWord = keyWord1;
            uWeight = weight;

            ui->weightEdit_2->setText(QString::number(uWeight));

            if(sex==1)ui->man_2->setChecked(true);
            if(sex==2)ui->woman_2->setChecked(true);

            if(aim==1)ui->radioButton_6->setChecked(true);
            if(aim==2)ui->radioButton_7->setChecked(true);
            if(aim==3)ui->radioButton_8->setChecked(true);

            file.close();
            qDebug() << "File saved: " << filePath;
        } else {

            qDebug() << "Failed to open file for writing"<< file.errorString() << filePath <<endl;
        }



        //创建计划 日记
        QString filePath1 = currentDir.filePath("plan.txt");
        QString filePath2 = currentDir.filePath("edit.txt");
        QFile file1(filePath1);
        QFile file2(filePath2);

        myFit->planString = filePath1;
        myFit->planUpdate();
        myFit->editString = filePath2;
        myFit->editUpdate();

        if (file2.open(QIODevice::WriteOnly | QIODevice::Append |QIODevice::Text)) {
            qDebug() << "File saved: " << filePath2;
            file2.close();
        } else {
            qDebug() << "Failed to open file for writing"<< file.errorString() << filePath2 <<endl;
        }
        if (file1.open(QIODevice::WriteOnly | QIODevice::Append |QIODevice::Text)) {
            qDebug() << "File saved: " << filePath2;
            file1.close();
        } else {
            qDebug() << "Failed to open file for writing"<< file.errorString() << filePath2 <<endl;
        }

        ui->stackedWidget->setCurrentWidget(ui->page4);
        this->setWindowTitle("主界面");
        ui->menuBar->show();
    });







    connect(ui->actionNew,ui->actionNew->triggered,[=](){
        ui->stackedWidget->setCurrentWidget(ui->page6);
        this->setWindowTitle("修改体重");

        int weight = ui->weightEdit_2->text().toInt();

        //按照 userName keyWord weight sex aim 的顺序保存用户信息
        QDir currentDir = QDir::current();
        if (!currentDir.cd("data")) {
             qDebug() << "Failed to enter folder: " << "data";
             return ;
        }
        QString folderName = uName;
        if (!currentDir.cd(folderName)) {
            qDebug() << "Failed to enter folder: " << folderName;
            return ;
        }

        QString filePath = currentDir.filePath("user_data.txt");
        QFile file(filePath);

        file.resize(0);

        if (file.open(QIODevice::WriteOnly | QIODevice::Append |QIODevice::Text)) {
            QTextStream out(&file);
            out<<uName<<' ' <<uWord<< ' ' << weight << ' ' <<sex<<' '<<aim<< ' '<<endl;
            uWeight = weight;

            file.close();
            qDebug() << "File saved: " << filePath;
        } else {

            qDebug() << "Failed to open file for writing"<< file.errorString() << filePath <<endl;
        }

    });


    connect(ui->next2_2,ui->next2_2->clicked,[=](){
        ui->stackedWidget->setCurrentWidget(ui->page4);
        this->setWindowTitle("主界面");
        ui->menuBar->show();
    });


    /*
        uName
        uWeight
        sex
        aim
    */

    connect(ui->btn_FitPlan,ui->btn_FitPlan->clicked,[=](){
        myFit->initShow ();
    });
    connect(ui->btn_dongzuoku,ui->btn_dongzuoku->clicked,[=](){
       myKu->show();
    });


}

MainWindow::~MainWindow()
{
    delete ui;
}
