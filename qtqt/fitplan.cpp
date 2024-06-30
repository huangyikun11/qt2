#include "fitplan.h"
#include "ui_fitplan.h"
#include <QFile>
#include <QDebug>
#include <QTextEdit>

FitPlan::FitPlan(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FitPlan)
{
    ui->setupUi(this);
    this->setWindowTitle("健身计划");


    // 加载图像
    QPixmap originalPixmap(":/info/u=3832844161,1259782480&fm=253&fmt=auto&app=138&f=JPEG.webp");

    QPixmap scaledPixmap = originalPixmap.scaled(100,100);

    // 将调整后的图像设置为label的pixmap
    ui->label->setPixmap(scaledPixmap);
    ui->textEdit->setStyleSheet("QTextEdit { border: 2px solid #333; border-radius: 8px; padding: 10px; }");



    connect(ui->pushButton,ui->pushButton->clicked,[=](){
        ui->stackedWidget->setCurrentWidget(ui->page2);
    });
    connect(ui->pushButton_2,ui->pushButton_2->clicked,[=](){
        ui->stackedWidget->setCurrentWidget(ui->page3);
    });
    connect(ui->pushButton_3,ui->pushButton_3->clicked,[=](){
        ui->stackedWidget->setCurrentWidget(ui->page1);
    });
    connect(ui->pushButton_5,ui->pushButton_5->clicked,[=](){
        ui->stackedWidget->setCurrentWidget(ui->page1);
    });

    for(int i=0;i<10;i++)
       for(int j=0;j<7;j++)
           ui->tab->setItem(i,j, new QTableWidgetItem(""));

    for(int i=0;i<10;i++)
       for(int j=0;j<7;j++)
           ui->tab_2->setItem(i,j, new QTableWidgetItem(""));

    for(int i=0;i<10;i++)
       for(int j=0;j<7;j++)
           ui->tab_3->setItem(i,j, new QTableWidgetItem(""));

    ui->tab->setItem(0,0, new QTableWidgetItem("引体向上"));
    ui->tab->setItem(1,0, new QTableWidgetItem("杠铃划船"));
    ui->tab->setItem(2,0, new QTableWidgetItem("蝴蝶机反向飞鸟"));
    ui->tab->setItem(3,0, new QTableWidgetItem("哑铃俯身飞鸟"));
    ui->tab->setItem(4,0, new QTableWidgetItem("哑铃弯举"));
    ui->tab->setItem(5,0, new QTableWidgetItem("杠铃弯举"));

    ui->tab->setItem(0,3, new QTableWidgetItem("史密斯推胸"));
    ui->tab->setItem(1,3, new QTableWidgetItem("哑铃推举"));
    ui->tab->setItem(2,3, new QTableWidgetItem("哑铃侧平举"));
    ui->tab->setItem(3,3, new QTableWidgetItem("龙门架提拉"));
    ui->tab->setItem(4,3, new QTableWidgetItem("哑铃颈后臂屈伸"));
    ui->tab->setItem(5,3, new QTableWidgetItem("杠铃仰卧臂屈伸"));


    ui->tab->setItem(0,6, new QTableWidgetItem("器械腿屈伸"));
    ui->tab->setItem(1,6, new QTableWidgetItem("器械腿弯举"));
    ui->tab->setItem(2,6, new QTableWidgetItem("硬拉"));
    ui->tab->setItem(3,6, new QTableWidgetItem("平板卷腹"));
    ui->tab->setItem(4,6, new QTableWidgetItem("平板举腿"));

    ui->tabWidget->setTabText(0,"推荐计划");
    ui->tabWidget->setTabText(1,"计划1");
    ui->tabWidget->setTabText(2,"计划2");


    connect(ui->pushButton_4,ui->pushButton_4->clicked,[=](){
        this->planUpdate();
    });

    connect(ui->pushButton_6,ui->pushButton_6->clicked,[=](){
        this->editUpdate();
    });



    //connect(ui->calendarWidgetr, &QCalendarWidget::selectionChanged, this, &MainWindow::onDateSelectionChanged);
}

void FitPlan::initShow(){
    ui->stackedWidget->setCurrentWidget(ui->page1);
    this->show();

    ui->tabWidget->setStyleSheet("border: 2px solid black;");
}


QString FitPlan::get(int i, int j, int k){
    if(i==0)return ui->tab->item(j,k)->text();
    if(i==1)return ui->tab_2->item(j,k)->text();
    if(i==2)return ui->tab_3->item(j,k)->text();
    return "";
}

void FitPlan::planInit(){
    QFile file(planString);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        qDebug() << "Could not open file";
        return ;
    }

    QTextStream in(&file);

    for(int i=0;i<10;i++)
       for(int j=0;j<7;j++)
           if(!in.atEnd()){
               QString line = in.readLine();
               ui->tab->setItem(i,j, new QTableWidgetItem(line));
           }

    for(int i=0;i<10;i++)
       for(int j=0;j<7;j++)
           if(!in.atEnd()){
               QString line = in.readLine();
               ui->tab_2->setItem(i,j, new QTableWidgetItem(line));
           }

    for(int i=0;i<10;i++)
       for(int j=0;j<7;j++)
           if(!in.atEnd()){
               QString line = in.readLine();
               ui->tab_3->setItem(i,j, new QTableWidgetItem(line));
           }

    file.close();
}

void FitPlan::planUpdate(){
    QFile file(planString);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        qDebug() << "Could not open file";
        return ;
    }
    QTextStream out(&file);

    for(int k=0;k<3;k++)
        for(int i=0;i<10;i++)
            for(int j=0;j<7;j++)
                out<<this->get(k,i,j)<<endl;

    file.close();
    return ;
}


void FitPlan::editInit(){
    QFile file(editString);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        qDebug() << "Could not open file";
        return ;
    }

    QTextStream in(&file);
    QString ins = in.readAll();
    ui->textEdit->setText(ins);

    file.close();
}

void FitPlan::editUpdate(){
    QFile file(editString);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        qDebug() << "Could not open file";
        return ;
    }
    QTextStream out(&file);

    out<<ui->textEdit->toPlainText();

    file.close();
    return ;
}





FitPlan::~FitPlan()
{
    delete ui;
}
