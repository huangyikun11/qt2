/********************************************************************************
** Form generated from reading UI file 'record.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECORD_H
#define UI_RECORD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_record
{
public:
    QLabel *label;
    QLineEdit *output;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *number;
    QPushButton *back;
    QPushButton *close;
    QPushButton *done;
    QPushButton *browse;
    QLineEdit *piece;
    QLabel *label_6;

    void setupUi(QWidget *record)
    {
        if (record->objectName().isEmpty())
            record->setObjectName("record");
        record->resize(371, 348);
        record->setStyleSheet(QString::fromUtf8("background-image: url(:/ttt/th (1).jpg);"));
        label = new QLabel(record);
        label->setObjectName("label");
        label->setGeometry(QRect(130, 20, 111, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font.setPointSize(16);
        font.setWeight(QFont::Bold);
        font.setItalic(false);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("font: 75 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
""));
        output = new QLineEdit(record);
        output->setObjectName("output");
        output->setGeometry(QRect(140, 60, 151, 22));
        label_2 = new QLabel(record);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(31, 61, 101, 19));
        label_2->setStyleSheet(QString::fromUtf8("font: 75 14pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_3 = new QLabel(record);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(110, 90, 191, 31));
        label_4 = new QLabel(record);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(90, 130, 31, 31));
        label_4->setStyleSheet(QString::fromUtf8("font: 75 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        number = new QLineEdit(record);
        number->setObjectName("number");
        number->setGeometry(QRect(130, 130, 101, 31));
        back = new QPushButton(record);
        back->setObjectName("back");
        back->setGeometry(QRect(190, 170, 81, 51));
        back->setStyleSheet(QString::fromUtf8("font: 12pt \"\346\245\267\344\275\223\";"));
        close = new QPushButton(record);
        close->setObjectName("close");
        close->setGeometry(QRect(190, 230, 81, 51));
        close->setStyleSheet(QString::fromUtf8("font: 12pt \"\346\245\267\344\275\223\";"));
        done = new QPushButton(record);
        done->setObjectName("done");
        done->setGeometry(QRect(90, 170, 81, 51));
        done->setStyleSheet(QString::fromUtf8("font: 12pt \"\346\245\267\344\275\223\";"));
        browse = new QPushButton(record);
        browse->setObjectName("browse");
        browse->setGeometry(QRect(90, 230, 81, 51));
        browse->setStyleSheet(QString::fromUtf8("font: 12pt \"\346\245\267\344\275\223\";"));
        piece = new QLineEdit(record);
        piece->setObjectName("piece");
        piece->setGeometry(QRect(250, 130, 31, 31));
        label_6 = new QLabel(record);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(290, 130, 31, 31));
        label_6->setStyleSheet(QString::fromUtf8("font: 75 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        retranslateUi(record);

        QMetaObject::connectSlotsByName(record);
    } // setupUi

    void retranslateUi(QWidget *record)
    {
        record->setWindowTitle(QCoreApplication::translate("record", "Form", nullptr));
        label->setText(QCoreApplication::translate("record", "    \350\256\260\345\275\225\350\206\263\351\243\237", nullptr));
        label_2->setText(QCoreApplication::translate("record", "\346\221\204\345\205\245\346\200\273\347\203\255\351\207\217\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("record", "ps:\350\257\267\350\276\223\345\205\245\346\221\204\345\205\245\351\243\237\347\211\251\347\232\204\347\274\226\345\217\267\357\274\2101-80\357\274\211\n"
"\345\275\225\345\205\245\345\222\214\345\210\240\351\231\244\345\235\207\351\241\273\345\241\253\345\206\231\351\243\237\347\211\251\347\274\226\345\217\267\345\222\214\344\273\275\346\225\260\345\226\224", nullptr));
        label_4->setText(QCoreApplication::translate("record", "\347\274\226\345\217\267\357\274\232", nullptr));
        back->setText(QCoreApplication::translate("record", "\345\210\240\345\207\217\351\243\237\347\211\251", nullptr));
        close->setText(QCoreApplication::translate("record", "\345\205\263\351\227\255", nullptr));
        done->setText(QCoreApplication::translate("record", "\347\241\256\345\256\232\345\275\225\345\205\245", nullptr));
        browse->setText(QCoreApplication::translate("record", "\346\237\245\347\234\213\345\233\276\351\211\264", nullptr));
        label_6->setText(QCoreApplication::translate("record", "\344\273\275", nullptr));
    } // retranslateUi

};

namespace Ui {
    class record: public Ui_record {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECORD_H
