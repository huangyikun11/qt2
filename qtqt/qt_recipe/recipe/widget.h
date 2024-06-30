#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <menu1.h>
#include <check.h>
#include <record.h>
#include <QString>
namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();
    void showWidget();
    float all_heat=0,tar_heat=0;
    float rec_heat[85]={30,238,228.4,33,24.9,
                        143,117.4,38,32,20.9,
                        104,27,44.9,70,86,
                        282.5,54,24,134,58.4,
                        93.1,97.8,137,187,148.2,
                        93.7,181.5,68,67.9,75.4,
                        126.3,150.7,92.5,136.5,63.3,
                        98,156,126,42.7,126,
                        228.7,436.2,646,19,18,
                        229.5,79.2,204,90.3,519.6,
                        338,357,208,506,520,
                        390,117.3,142,516,363,
                        104.5,145.4,167.9,167.3,242.8,
                        44,116,131,84.5,252.8,
                        111,93.8,215.5,102,97.5,
                        115,114.5,99.6,223,82.1};
    int buc[85]={0};
    QWidget* w;

private slots:
    void on_cancel_button_clicked();

    void on_browse_button_clicked();

    void on_search_button_clicked();

    void on_begin_button_clicked();

private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
