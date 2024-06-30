#include "fitplansp.h"
#include "ui_fitplansp.h"

FitPlanSP::FitPlanSP(QWidget *parent) :
    QTableWidget(parent),
    ui(new Ui::FitPlanSP)
{
    ui->setupUi(this);


    this->setRowCount(10);
    this->setColumnCount(7);
    this->setHorizontalHeaderItem(0,new QTableWidgetItem("周一"));
    this->setHorizontalHeaderItem(1,new QTableWidgetItem("周二"));
    this->setHorizontalHeaderItem(2,new QTableWidgetItem("周三"));
    this->setHorizontalHeaderItem(3,new QTableWidgetItem("周四"));
    this->setHorizontalHeaderItem(4,new QTableWidgetItem("周五"));
    this->setHorizontalHeaderItem(5,new QTableWidgetItem("周六"));
    this->setHorizontalHeaderItem(6,new QTableWidgetItem("周日"));
}

FitPlanSP::~FitPlanSP()
{
    delete ui;
}
