#ifndef MENU4_H
#define MENU4_H

#include <QWidget>
#include <menu3.h>
#include <widget.h>

namespace Ui {
class menu4;
}

class menu4 : public QWidget
{
    Q_OBJECT

public:
    explicit menu4(QWidget *parent = 0);
    ~menu4();
    int Tagg=0;
    QWidget *w,**ww;

private slots:
    void on_last_page_clicked();

    void on_close_clicked();

private:
    Ui::menu4 *ui;
};

#endif // MENU4_H
