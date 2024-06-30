#ifndef MENU1_H
#define MENU1_H

#include <QWidget>
#include <menu2.h>
#include <widget.h>
namespace Ui {
class menu1;
}

class menu1 : public QWidget
{
    Q_OBJECT

public:
    explicit menu1(QWidget *parent = 0);
    ~menu1();
    int Tagg=0;
    QWidget *w,**ww;

private slots:

    void on_close_clicked();

    void on_next_page_clicked();

private:
    Ui::menu1 *ui;
};

#endif // MENU1_H
