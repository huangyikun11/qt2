#include "record.h"
#include "ui_record.h"
#include <QString>

record::record(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::record)
{
    ui->setupUi(this);
    connect(ui->done,&QPushButton::clicked,this,&record::on_done_clicked);
    connect(ui->close,&QPushButton::clicked,this,&record::on_close_clicked);
    connect(ui->back,&QPushButton::clicked,this,&record::on_back_clicked);
    connect(ui->browse,&QPushButton::clicked,this,&record::on_browse_clicked);
}

record::~record()
{
    delete ui;
}

void record::on_done_clicked()        //加法记录热量
{
    disconnect(ui->done,&QPushButton::clicked,nullptr,nullptr);
    QString text1 = ui->number->text();         //检查是否为合法输入
    QString text2 = ui->piece->text();

    bool ok1,ok2;
    int x=text1.toInt(&ok1);
    int fvalue2=text2.toInt(&ok2);
    float fvalue1;

    if(ok1&&ok2){                   //sum记录总摄入热量，转换为qstring类型后输出，并且在错误输入时报错
        fvalue1=(x>=1&&x<=80)?*(ind+x-1):-1;
        qDebug()<<*(ind+79-1);
        if(fvalue1>0){       // 防止输入图鉴以外的编号
            *(ind_int+x-1)+=fvalue2;
            sum += fvalue1*fvalue2;
            expression = QString::number(sum);
        }
        else expression = "wrong input";
        ui->output->setText(expression);
    }else{
        expression = "wrong input";
        ui->output->setText(expression);
    }
    connect(ui->done,&QPushButton::clicked,this,&record::on_done_clicked);
}

void record::on_close_clicked()        //关闭
{
    w->show();
    *heat=sum;
    this->close();
}

void record::on_back_clicked()          //与记录食物实现方式相同，只不过改为‘-=’
{
    disconnect(ui->back,&QPushButton::clicked,nullptr,nullptr);
    QString text1 = ui->number->text();         //检查是否为合法输入
    QString text2 = ui->piece->text();

    bool ok1,ok2;
    int x=text1.toInt(&ok1);
    int fvalue2=text2.toInt(&ok2);
    float fvalue1;

    if(ok1&&ok2){                   //总摄入热量sum减去要删除的食物，转换为qstring类型后输出，并且在错误输入时报错
        fvalue1=(x>=1&&x<=80)?*(ind+x-1):-1;
        if(fvalue1>0&&(*(ind_int+x-1))>0){
            *(ind_int+x-1)-=fvalue2;
            sum -= fvalue1*fvalue2;
            expression = QString::number(sum);
        }
        else expression = "wrong input";
        ui->output->setText(expression);
    }else{
        expression = "wrong input";
        ui->output->setText(expression);
    }
    connect(ui->back,&QPushButton::clicked,this,&record::on_back_clicked);
}

void record::on_browse_clicked()
{
    disconnect(ui->browse,&QPushButton::clicked,nullptr,nullptr);
    menu1 *mm=new menu1;
    mm->show();
    mm->ww=this->ww;
    mm->Tagg=0;       //用来解决menu1关闭时会打开主页widget的问题
    connect(ui->browse,&QPushButton::clicked,this,&record::on_browse_clicked);
}
