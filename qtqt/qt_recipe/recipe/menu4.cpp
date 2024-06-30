#include "menu4.h"
#include "ui_menu4.h"

menu4::menu4(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::menu4)
{
    ui->setupUi(this);
    connect(ui->last_page,&QPushButton::clicked,this,&menu4::on_last_page_clicked);
    connect(ui->close,&QPushButton::clicked,this,&menu4::on_close_clicked);
}

menu4::~menu4()
{
    delete ui;
}

void menu4::on_last_page_clicked()
{
    disconnect(ui->last_page, &QPushButton::clicked, nullptr, nullptr);
         //扩展更多图鉴页
    menu3 *m = new menu3;
    m->w = this->w;
    m->show();
    m->Tagg=this->Tagg;
    m->w=this->w;
    //*(this->ww)=m;
    //*(m->ww)=*(this->ww);
    connect(ui->last_page,&QPushButton::clicked,this,&menu4::on_last_page_clicked);
    this->close();
}

void menu4::on_close_clicked()
{
    if(Tagg==-1){          //同理防止多开
        w->show();
    }
    //*(this->ww)=nullptr;
    this->close();
}


