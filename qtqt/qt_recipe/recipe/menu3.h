#ifndef MENU3_H
#define MENU3_H

#include <QWidget>
#include <menu2.h>
#include <widget.h>
#include <menu4.h>

namespace Ui {
class menu3;
}

class menu3 : public QWidget
{
    Q_OBJECT

public:
    explicit menu3(QWidget *parent = 0);
    ~menu3();
    int Tagg=0;
    QWidget *w,**ww;

private slots:
    void on_last_page_clicked();

    void on_close_clicked();

    void on_next_page_clicked();

private:
    Ui::menu3 *ui;
};

#endif // MENU3_H
