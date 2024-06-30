#include "widget.h"
#include "ui_record.h"
#include "ui_widget.h"
#include "ui_check.h"
#include "ui_record.h"
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    connect(ui->cancel_button,&QPushButton::clicked,this,&Widget::on_cancel_button_clicked);
    connect(ui->browse_button,&QPushButton::clicked,this,&Widget::on_browse_button_clicked);
    connect(ui->begin_button,&QPushButton::clicked,this,&Widget::on_begin_button_clicked);
    connect(ui->search_button,&QPushButton::clicked,this,&Widget::on_search_button_clicked);
}

void Widget::showWidget()
{
    this->show();
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_cancel_button_clicked()
{
    /*if(w!=nullptr)
    {
        w->close();
    }*/
    this->close();
}

void Widget::on_browse_button_clicked()
{
    disconnect(ui->browse_button, &QPushButton::clicked, nullptr, nullptr);
    menu1 *m= new menu1;
    m->show();
    m->w = this;
    m->ww=&(this->w);
    m->Tagg = -1;
    connect(ui->browse_button,&QPushButton::clicked,this,&Widget::on_browse_button_clicked);
    this->hide();
}

void Widget::on_search_button_clicked()
{
    disconnect(ui->search_button,&QPushButton::clicked,nullptr,nullptr);
    check *cc= new check;
    cc->sum_value=this->all_heat;    //传值
    cc->show();
    cc->w=this;
    cc->ww=&(this->w);
    cc->ind_int=this->buc;
    cc->tar=&(this->tar_heat);
    cc->exp=QString::number(this->all_heat);
    cc->ui->output->setText(cc->exp);
    cc->exp2=QString::number(this->tar_heat);
    cc->ui->aim->setText(cc->exp2);

    if(all_heat>=tar_heat)cc->ui->ooo->setText("好小子没少吃，去动一动");
    else cc->ui->ooo->setText("还可以再吃喔");

    connect(ui->search_button,&QPushButton::clicked,this,&Widget::on_search_button_clicked);
    this->hide();
}

void Widget::on_begin_button_clicked()
{
    disconnect(ui->begin_button,&QPushButton::clicked,nullptr,nullptr);
    record *r=new record;
    r->sum=this->all_heat;        //传值  保存
    r->heat=&all_heat;
    r->w=this;
    r->ww=&(this->w);
    r->ind=this->rec_heat;
    r->ind_int=this->buc;
    r->show();
    QString exp=QString::number(r->sum);
    r->ui->output->setText(exp);
    connect(ui->begin_button,&QPushButton::clicked,this,&Widget::on_begin_button_clicked);
    this->hide();
}
