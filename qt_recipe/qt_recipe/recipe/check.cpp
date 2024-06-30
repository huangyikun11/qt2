#include "check.h"
#include "ui_check.h"

check::check(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::check)
{
    ui->setupUi(this);
    connect(ui->close,&QPushButton::clicked,this,&check::on_close_clicked);
    connect(ui->done,&QPushButton::clicked,this,&check::on_done_clicked);
    connect(ui->search,&QPushButton::clicked,this,&check::on_search_clicked);
    connect(ui->browse,&QPushButton::clicked,this,&check::on_browse_clicked);
}

check::~check()
{
    delete ui;
}

void check::on_search_clicked()
{
    disconnect(ui->search,&QPushButton::clicked,nullptr,nullptr);
    QString text = ui->num_in->text();
    bool ok1;
    int fvalue1=text.toInt(&ok1);
    if(!ok1||fvalue1<=0||fvalue1>80)
    {
        exp2="\""+text+"\""+"输入错误，请重新输入";
    }
    else
    {
        exp2=QString::number(*(ind_int+fvalue1-1));
    }
    ui->num_out->setText(exp2);
    connect(ui->search,&QPushButton::clicked,this,&check::on_search_clicked);
}
void check::on_close_clicked()
{
    w->show();
    this->close();

}

void check::on_done_clicked()
{
    disconnect(ui->done,&QPushButton::clicked,nullptr,nullptr);
    QString text = ui->aim->text();
    //qDebug() << "Converted double value:" << text;
    bool ok1;
    double fvalue1=text.toDouble(&ok1);
    if(!ok1||fvalue1<0)
    {
        exp2="错误";
    }
    else
    {
        *tar=fvalue1;
        fvalue1-=sum_value;
        if(fvalue1>0)exp2="还可以再吃喔";
        else exp2="好小子没少吃，去动一动";
    }
    ui->ooo->setText(exp2);
    //else ui->aim->setText(QString::number(fvalue1));
    connect(ui->done,&QPushButton::clicked,this,&check::on_done_clicked);
}

void check::on_browse_clicked()
{
    disconnect(ui->browse,&QPushButton::clicked,nullptr,nullptr);
    menu1 *mm=new menu1;
    mm->show();
    mm->ww=this->ww;
    mm->Tagg=0;       //用来解决menu1关闭时会打开主页widget的问题
    connect(ui->browse,&QPushButton::clicked,this,&check::on_browse_clicked);
}
