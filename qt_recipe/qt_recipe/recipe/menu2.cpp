#include "menu2.h"
#include "ui_menu2.h"

menu2::menu2(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::menu2)
{
    ui->setupUi(this);
    connect(ui->last_page,&QPushButton::clicked,this,&menu2::on_last_page_clicked);
    connect(ui->next_page,&QPushButton::clicked,this,&menu2::on_next_page_clicked);
    connect(ui->close,&QPushButton::clicked,this,&menu2::on_close_clicked);
}

menu2::~menu2()
{
    delete ui;
}

void menu2::on_last_page_clicked()
{
    disconnect(ui->last_page, &QPushButton::clicked, nullptr, nullptr);
     //扩展更多图鉴页
    menu1 *m = new menu1;
    m->w = this->w;
    m->show();
    m->Tagg=this->Tagg;
    m->w=this->w;
    //*(this->ww)=m;
    //*(m->ww)=*(this->ww);
    connect(ui->last_page,&QPushButton::clicked,this,&menu2::on_last_page_clicked);
    this->close();
}

void menu2::on_close_clicked()
{
    if(Tagg==-1){          //同理防止多开
        w->show();
    }
    //*(this->ww)=nullptr;
    this->close();
}

void menu2::on_next_page_clicked()
{
    disconnect(ui->next_page, &QPushButton::clicked, nullptr, nullptr);
    menu3 *mm=new menu3;
    mm->show();
    mm->w = this->w;
    //*(this->ww)=mm;
    //*(mm->ww)=*(this->ww);
    mm->Tagg=this->Tagg;   //同理，标签判断
    connect(ui->next_page,&QPushButton::clicked,this,&menu2::on_next_page_clicked);
    this->close();
}
