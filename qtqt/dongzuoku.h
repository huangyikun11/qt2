#ifndef DONGZUOKU_H
#define DONGZUOKU_H

#include <QWidget>
#include <QTreeWidget>
#include <QTreeWidgetItem>

namespace Ui {
class dongzuoku;
}

class dongzuoku : public QWidget
{
    Q_OBJECT

public:
    explicit dongzuoku(QWidget *parent = nullptr);
    ~dongzuoku();

private slots:
    void addNewActionclicked();
private:
    Ui::dongzuoku *ui;
};

#endif // DONGZUOKU_H
