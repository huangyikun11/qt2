#ifndef TIANJIADONGZUO_H
#define TIANJIADONGZUO_H

#include <QDialog>

namespace Ui {
class tianjiadongzuo;
}

class tianjiadongzuo : public QDialog
{
    Q_OBJECT

public:
    explicit tianjiadongzuo(QWidget *parent = nullptr);
    ~tianjiadongzuo();

private:
    Ui::tianjiadongzuo *ui;
};

#endif // TIANJIADONGZUO_H
