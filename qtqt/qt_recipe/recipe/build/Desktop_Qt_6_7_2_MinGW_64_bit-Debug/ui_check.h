/********************************************************************************
** Form generated from reading UI file 'check.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHECK_H
#define UI_CHECK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_check
{
public:
    QLabel *label;
    QLineEdit *output;
    QLabel *label_2;
    QLineEdit *aim;
    QPushButton *close;
    QPushButton *done;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *ooo;
    QPushButton *search;
    QLineEdit *num_in;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *num_out;
    QLabel *label_7;
    QPushButton *browse;

    void setupUi(QWidget *check)
    {
        if (check->objectName().isEmpty())
            check->setObjectName("check");
        check->resize(638, 459);
        check->setStyleSheet(QString::fromUtf8("background-image: url(:/ttt/OIP.jpg);"));
        label = new QLabel(check);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 40, 111, 21));
        label->setStyleSheet(QString::fromUtf8("font: 75 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"background-image: url(:/ttt/mm.jpg);"));
        output = new QLineEdit(check);
        output->setObjectName("output");
        output->setGeometry(QRect(140, 30, 171, 41));
        label_2 = new QLabel(check);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 90, 101, 21));
        label_2->setStyleSheet(QString::fromUtf8("font: 75 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"background-image: url(:/ttt/mm.jpg);"));
        aim = new QLineEdit(check);
        aim->setObjectName("aim");
        aim->setGeometry(QRect(140, 90, 141, 41));
        close = new QPushButton(check);
        close->setObjectName("close");
        close->setGeometry(QRect(420, 320, 71, 61));
        close->setStyleSheet(QString::fromUtf8("background-image: url(:/ttt/mm.jpg);"));
        done = new QPushButton(check);
        done->setObjectName("done");
        done->setGeometry(QRect(120, 180, 181, 41));
        done->setStyleSheet(QString::fromUtf8("background-image: url(:/ttt/mm.jpg);"));
        label_3 = new QLabel(check);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(40, 140, 281, 31));
        label_3->setStyleSheet(QString::fromUtf8("font: 12pt \"\346\245\267\344\275\223\";\n"
"background-image: url(:/ttt/mm.jpg);"));
        label_4 = new QLabel(check);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(320, 40, 81, 21));
        label_4->setStyleSheet(QString::fromUtf8("font: 75 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        ooo = new QLineEdit(check);
        ooo->setObjectName("ooo");
        ooo->setGeometry(QRect(360, 130, 201, 31));
        search = new QPushButton(check);
        search->setObjectName("search");
        search->setGeometry(QRect(140, 380, 71, 61));
        search->setStyleSheet(QString::fromUtf8("background-image: url(:/ttt/mm.jpg);"));
        num_in = new QLineEdit(check);
        num_in->setObjectName("num_in");
        num_in->setGeometry(QRect(210, 240, 113, 51));
        label_5 = new QLabel(check);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(20, 250, 151, 41));
        label_5->setStyleSheet(QString::fromUtf8("font: 75 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"background-image: url(:/ttt/mm.jpg);"));
        label_6 = new QLabel(check);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(20, 320, 121, 41));
        label_6->setStyleSheet(QString::fromUtf8("font: 75 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"background-image: url(:/ttt/mm.jpg);"));
        num_out = new QLineEdit(check);
        num_out->setObjectName("num_out");
        num_out->setGeometry(QRect(140, 320, 61, 51));
        label_7 = new QLabel(check);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(220, 320, 41, 41));
        label_7->setStyleSheet(QString::fromUtf8("font: 75 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"background-image: url(:/ttt/mm.jpg);"));
        browse = new QPushButton(check);
        browse->setObjectName("browse");
        browse->setGeometry(QRect(420, 220, 71, 61));
        browse->setStyleSheet(QString::fromUtf8("background-image: url(:/ttt/mm.jpg);"));

        retranslateUi(check);

        QMetaObject::connectSlotsByName(check);
    } // setupUi

    void retranslateUi(QWidget *check)
    {
        check->setWindowTitle(QCoreApplication::translate("check", "Form", nullptr));
        label->setText(QCoreApplication::translate("check", "\344\273\212\346\227\245\345\267\262\346\221\204\345\205\245", nullptr));
        label_2->setText(QCoreApplication::translate("check", "\347\233\256\346\240\207\347\203\255\351\207\217\357\274\232", nullptr));
        close->setText(QCoreApplication::translate("check", "\345\205\263\351\227\255", nullptr));
        done->setText(QCoreApplication::translate("check", "\347\241\256\345\256\232\347\233\256\346\240\207\347\203\255\351\207\217", nullptr));
        label_3->setText(QCoreApplication::translate("check", "\345\217\257\345\234\250\344\270\212\346\226\271\346\241\206\345\206\205\346\233\264\346\224\271\346\202\250\344\273\212\345\244\251\347\232\204\347\233\256\346\240\207\347\203\255\351\207\217 \342\206\221", nullptr));
        label_4->setText(QCoreApplication::translate("check", "\345\215\203\345\215\241", nullptr));
        search->setText(QCoreApplication::translate("check", "\346\237\245\350\257\242\350\217\234\345\223\201", nullptr));
        label_5->setText(QCoreApplication::translate("check", "\350\257\267\350\276\223\345\205\245\350\246\201\346\237\245\350\257\242\347\232\204\350\217\234\345\223\201\347\274\226\345\217\267", nullptr));
        label_6->setText(QCoreApplication::translate("check", "\346\202\250\344\273\212\345\244\251\350\277\231\351\201\223\350\217\234\345\220\203\344\272\206", nullptr));
        label_7->setText(QCoreApplication::translate("check", "\344\273\275", nullptr));
        browse->setText(QCoreApplication::translate("check", "\346\265\217\350\247\210\350\217\234\345\215\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class check: public Ui_check {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHECK_H
