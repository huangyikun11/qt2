#include "tianjiadongzuo.h"
#include "ui_tianjiadongzuo.h"

tianjiadongzuo::tianjiadongzuo(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::tianjiadongzuo)
{
    ui->setupUi(this);
}

tianjiadongzuo::~tianjiadongzuo()
{
    delete ui;
}

