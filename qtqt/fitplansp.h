#ifndef FITPLANSP_H
#define FITPLANSP_H

#include <QTableWidget>

namespace Ui {
class FitPlanSP;
}

class FitPlanSP : public QTableWidget
{
    Q_OBJECT

public:
    explicit FitPlanSP(QWidget *parent = 0);
    ~FitPlanSP();

private:
    Ui::FitPlanSP *ui;
};

#endif // FITPLANSP_H
