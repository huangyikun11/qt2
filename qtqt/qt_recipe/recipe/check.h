#ifndef CHECK_H
#define CHECK_H

#include <QWidget>
#include <widget.h>
#include <QString>
namespace Ui {
class check;
}

class check : public QWidget
{
    Q_OBJECT

public:
    explicit check(QWidget *parent = 0);
    ~check();
    float sum_value;   //总摄入量
    float aim_value;   //目标摄入量
    QString exp,exp2;
    Ui::check *ui;
    QWidget *w,**ww;
    int* ind_int;
    float* tar;
private slots:
    void on_close_clicked();

    void on_done_clicked();

    void on_search_clicked();
    void on_browse_clicked();

private:

};

#endif // CHECK_H
