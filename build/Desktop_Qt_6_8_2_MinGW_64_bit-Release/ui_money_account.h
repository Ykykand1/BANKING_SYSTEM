/********************************************************************************
** Form generated from reading UI file 'money_account.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MONEY_ACCOUNT_H
#define UI_MONEY_ACCOUNT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_money_account
{
public:
    QGroupBox *groupBox;
    QPushButton *depositButton;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLabel *label;

    void setupUi(QDialog *money_account)
    {
        if (money_account->objectName().isEmpty())
            money_account->setObjectName("money_account");
        money_account->resize(480, 366);
        groupBox = new QGroupBox(money_account);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(20, 10, 431, 311));
        depositButton = new QPushButton(groupBox);
        depositButton->setObjectName("depositButton");
        depositButton->setGeometry(QRect(240, 230, 130, 41));
        depositButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(30, 145, 171, 31));
        label_2->setStyleSheet(QString::fromUtf8("    color: rgb(255, 255, 255);\n"
"    font-weight: bold;\n"
"font: 700 12pt \"Arial Rounded MT\";"));
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(240, 60, 131, 43));
        lineEdit->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"    padding: 8px;\n"
"    border: 1px solid #bbb;\n"
"    border-radius: 4px;\n"
"    background-color: #fff;\n"
"    selection-background-color: #3498db;\n"
"    min-height: 25px;\n"
""));
        lineEdit_2 = new QLineEdit(groupBox);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(240, 140, 131, 43));
        lineEdit_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"    padding: 8px;\n"
"    border: 1px solid #bbb;\n"
"    border-radius: 4px;\n"
"    background-color: #fff;\n"
"    selection-background-color: #3498db;\n"
"    min-height: 25px;\n"
""));
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 70, 71, 21));
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"    font-weight: bold;\n"
"font: 700 12pt \"Arial Rounded MT\";"));

        retranslateUi(money_account);

        QMetaObject::connectSlotsByName(money_account);
    } // setupUi

    void retranslateUi(QDialog *money_account)
    {
        money_account->setWindowTitle(QCoreApplication::translate("money_account", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("money_account", "Shto leke", nullptr));
        depositButton->setText(QCoreApplication::translate("money_account", "Konfirmo", nullptr));
        label_2->setText(QCoreApplication::translate("money_account", "Jepni vleren e lekeve", nullptr));
        label->setText(QCoreApplication::translate("money_account", "Jepni ID", nullptr));
    } // retranslateUi

};

namespace Ui {
    class money_account: public Ui_money_account {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MONEY_ACCOUNT_H
