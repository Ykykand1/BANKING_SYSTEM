/********************************************************************************
** Form generated from reading UI file 'money_get.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MONEY_GET_H
#define UI_MONEY_GET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_money_get
{
public:
    QGroupBox *groupBox;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QPushButton *terhiqLeke;

    void setupUi(QDialog *money_get)
    {
        if (money_get->objectName().isEmpty())
            money_get->setObjectName("money_get");
        money_get->resize(480, 320);
        groupBox = new QGroupBox(money_get);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(20, 20, 441, 281));
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 80, 81, 16));
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"    font-weight: bold;\n"
"    font: 700 12pt \"Arial Rounded MT\";"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 160, 251, 21));
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"    font-weight: bold;\n"
"    font: 700 12pt \"Arial Rounded MT\";"));
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(250, 70, 131, 33));
        lineEdit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    padding: 8px;\n"
"    border: 1px solid #bbb;\n"
"    border-radius: 4px;\n"
"    background-color: #fff;\n"
"    selection-background-color: #3498db;\n"
"    min-height: 15px;\n"
"    \n"
"	color: rgb(3, 4, 4);\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border: 1px solid #3498db;\n"
"}"));
        lineEdit_2 = new QLineEdit(groupBox);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(250, 150, 131, 33));
        lineEdit_2->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    padding: 8px;\n"
"    border: 1px solid #bbb;\n"
"    border-radius: 4px;\n"
"    background-color: #fff;\n"
"    selection-background-color: #3498db;\n"
"	color: rgb(0, 0, 0);\n"
"    min-height: 15px;\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border: 1px solid #3498db;\n"
"}"));
        terhiqLeke = new QPushButton(groupBox);
        terhiqLeke->setObjectName("terhiqLeke");
        terhiqLeke->setGeometry(QRect(300, 220, 101, 41));
        terhiqLeke->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #3498db;\n"
"    color: white;\n"
"    border: none;\n"
"    border-radius: 4px;\n"
"    padding: 10px 15px;\n"
"    font-weight: bold;\n"
"    min-width: 50px;\n"
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

        retranslateUi(money_get);

        QMetaObject::connectSlotsByName(money_get);
    } // setupUi

    void retranslateUi(QDialog *money_get)
    {
        money_get->setWindowTitle(QCoreApplication::translate("money_get", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("money_get", "Terheqja e lekeve", nullptr));
        label->setText(QCoreApplication::translate("money_get", "Jepni ID:", nullptr));
        label_2->setText(QCoreApplication::translate("money_get", "Jepni shumen e parave:", nullptr));
        terhiqLeke->setText(QCoreApplication::translate("money_get", "Terhiq", nullptr));
    } // retranslateUi

};

namespace Ui {
    class money_get: public Ui_money_get {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MONEY_GET_H
