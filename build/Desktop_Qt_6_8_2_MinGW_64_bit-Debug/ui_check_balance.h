/********************************************************************************
** Form generated from reading UI file 'check_balance.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHECK_BALANCE_H
#define UI_CHECK_BALANCE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_check_balance
{
public:
    QGroupBox *groupBox;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;

    void setupUi(QDialog *check_balance)
    {
        if (check_balance->objectName().isEmpty())
            check_balance->setObjectName("check_balance");
        check_balance->resize(450, 322);
        groupBox = new QGroupBox(check_balance);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(30, 10, 381, 281));
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 70, 71, 21));
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"    font-weight: bold;\n"
"font: 700 12pt \"Arial Rounded MT\";"));
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(140, 60, 131, 43));
        lineEdit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    padding: 8px;\n"
"    border: 1px solid #bbb;\n"
"    border-radius: 4px;\n"
"    background-color: #fff;\n"
"    selection-background-color: #3498db;\n"
"    min-height: 25px;\n"
"	color: rgb(0, 0, 0);\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border: 1px solid #3498db;\n"
"}"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(30, 140, 61, 21));
        label_2->setStyleSheet(QString::fromUtf8(" color: rgb(255, 255, 255);   \n"
" font-weight: bold;\n"
"font: 700 12pt \"Arial Rounded MT\";"));
        lineEdit_2 = new QLineEdit(groupBox);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(140, 130, 131, 43));
        lineEdit_2->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    padding: 8px;\n"
"    border: 1px solid #bbb;\n"
"    border-radius: 4px;\n"
"    background-color: #fff;\n"
"    selection-background-color: #3498db;\n"
"    min-height: 25px;\n"
"	color: rgb(0, 0, 0);\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border: 1px solid #3498db;\n"
"}"));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(220, 220, 130, 41));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #3498db;\n"
"    color: white;\n"
"    border: none;\n"
"    border-radius: 4px;\n"
"    padding: 10px 15px;\n"
"    font-weight: bold;\n"
"    min-width: 100px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #2980b9;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #1a5276;\n"
"}\n"
""));

        retranslateUi(check_balance);

        QMetaObject::connectSlotsByName(check_balance);
    } // setupUi

    void retranslateUi(QDialog *check_balance)
    {
        check_balance->setWindowTitle(QCoreApplication::translate("check_balance", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("check_balance", "Balanca", nullptr));
        label->setText(QCoreApplication::translate("check_balance", "Emri:", nullptr));
        label_2->setText(QCoreApplication::translate("check_balance", "ID:", nullptr));
        pushButton->setText(QCoreApplication::translate("check_balance", "Kontrollo", nullptr));
    } // retranslateUi

};

namespace Ui {
    class check_balance: public Ui_check_balance {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHECK_BALANCE_H
