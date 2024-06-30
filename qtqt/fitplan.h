#ifndef FITPLAN_H
#define FITPLAN_H

#include <QWidget>

namespace Ui {
class FitPlan;
}

class FitPlan : public QWidget
{
    Q_OBJECT
public:

    QString planString;
    QString editString;

    explicit FitPlan(QWidget *parent = 0);
    ~FitPlan();

    void initShow();

    QString get(int i,int j,int k);
    void planInit();
    void planUpdate();
    void editInit();
    void editUpdate();


private:
    Ui::FitPlan *ui;
};

#endif // FITPLAN_H
