/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QPushButton *begin_button;
    QPushButton *browse_button;
    QPushButton *search_button;
    QPushButton *cancel_button;
    QLabel *label;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(559, 435);
        Widget->setStyleSheet(QStringLiteral("background-image: url(:/ttt/th.jpg);"));
        begin_button = new QPushButton(Widget);
        begin_button->setObjectName(QStringLiteral("begin_button"));
        begin_button->setGeometry(QRect(240, 110, 81, 71));
        begin_button->setMinimumSize(QSize(60, 40));
        begin_button->setMaximumSize(QSize(1111, 1111));
        begin_button->setStyleSheet(QStringLiteral("font: 700 12pt \"Microsoft YaHei UI\";"));
        browse_button = new QPushButton(Widget);
        browse_button->setObjectName(QStringLiteral("browse_button"));
        browse_button->setGeometry(QRect(240, 270, 81, 71));
        browse_button->setMinimumSize(QSize(60, 40));
        browse_button->setMaximumSize(QSize(1111, 1111));
        browse_button->setStyleSheet(QStringLiteral("font: 700 12pt \"Microsoft YaHei UI\";"));
        search_button = new QPushButton(Widget);
        search_button->setObjectName(QStringLiteral("search_button"));
        search_button->setGeometry(QRect(240, 190, 81, 61));
        search_button->setMinimumSize(QSize(60, 40));
        search_button->setMaximumSize(QSize(1111, 1111));
        search_button->setStyleSheet(QStringLiteral("font: 700 12pt \"Microsoft YaHei UI\";"));
        cancel_button = new QPushButton(Widget);
        cancel_button->setObjectName(QStringLiteral("cancel_button"));
        cancel_button->setGeometry(QRect(240, 350, 81, 71));
        cancel_button->setMinimumSize(QSize(60, 40));
        cancel_button->setMaximumSize(QSize(1111, 1111));
        cancel_button->setStyleSheet(QStringLiteral("font: 700 12pt \"Microsoft YaHei UI\";"));
        label = new QLabel(Widget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(220, 60, 131, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font.setPointSize(20);
        label->setFont(font);
        label->setStyleSheet(QStringLiteral("background-color: rgba(255, 255, 255, 0);"));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", 0));
        begin_button->setText(QApplication::translate("Widget", "\345\274\200\345\247\213\350\256\260\345\275\225", 0));
        browse_button->setText(QApplication::translate("Widget", "\346\265\217\350\247\210\350\217\234\345\215\225", 0));
        search_button->setText(QApplication::translate("Widget", "\346\237\245\347\234\213\344\273\212\346\227\245", 0));
        cancel_button->setText(QApplication::translate("Widget", "\345\205\263\351\227\255\347\250\213\345\272\217", 0));
        label->setText(QApplication::translate("Widget", "\345\201\245\345\272\267\351\243\237\350\260\261", 0));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
