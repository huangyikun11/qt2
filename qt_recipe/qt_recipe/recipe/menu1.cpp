#include "menu1.h"
#include "ui_menu1.h"

menu1::menu1(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::menu1)
{
    ui->setupUi(this);
    connect(ui->close,&QPushButton::clicked,this,&menu1::on_close_clicked);
    connect(ui->next_page,&QPushButton::clicked,this,&menu1::on_next_page_clicked);
}

menu1::~menu1()
{
    delete ui;
}

void menu1::on_close_clicked()
{
    if(Tagg==-1)w->show();
    //*(this->ww)=nullptr;
    this->close();
}

void menu1::on_next_page_clicked()
{
    disconnect(ui->next_page, &QPushButton::clicked, nullptr, nullptr);
    menu2 *mm=new menu2;
    mm->show();
    mm->w = this->w;
    //*(this->ww)=mm;
    //*(mm->ww)=*(this->ww);
    mm->Tagg=this->Tagg;   //同理，标签判断
    connect(ui->next_page,&QPushButton::clicked,this,&menu1::on_next_page_clicked);
    this->close();
}
