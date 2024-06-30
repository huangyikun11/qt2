#ifndef MENU2_H
#define MENU2_H

#include <QWidget>
#include <menu1.h>
#include <widget.h>
#include <menu3.h>

namespace Ui {
class menu2;
}

class menu2 : public QWidget
{
    Q_OBJECT

public:
    explicit menu2(QWidget *parent = 0);
    ~menu2();
    int Tagg=0;
    QWidget *w,**ww;

private slots:
    void on_last_page_clicked();

    void on_close_clicked();

    void on_next_page_clicked();

private:
    Ui::menu2 *ui;
};

#endif // MENU2_H
