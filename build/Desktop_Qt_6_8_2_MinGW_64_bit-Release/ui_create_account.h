/********************************************************************************
** Form generated from reading UI file 'create_account.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATE_ACCOUNT_H
#define UI_CREATE_ACCOUNT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_create_account
{
public:
    QGroupBox *groupBox;
    QLabel *label;
    QLineEdit *lineEdit_2;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLabel *label_4;
    QLineEdit *lineEdit_4;
    QLabel *label_5;
    QLineEdit *lineEdit_5;
    QPushButton *pushButton;

    void setupUi(QDialog *create_account)
    {
        if (create_account->objectName().isEmpty())
            create_account->setObjectName("create_account");
        create_account->resize(610, 420);
        create_account->setStyleSheet(QString::fromUtf8("\n"
"QFrame#formFrame {\n"
"    background-color: #f5f5f5;\n"
"    border: 1px solid #ddd;\n"
"    border-radius: 8px;\n"
"    padding: 20px;\n"
"}"));
        groupBox = new QGroupBox(create_account);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(30, 10, 541, 381));
        groupBox->setStyleSheet(QString::fromUtf8("\n"
"    font-family: Arial, Helvetica, sans-serif;\n"
"    font-size: 12px;\n"
"    color: #444;\n"
"    font-weight: bold;\n"
"\n"
""));
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setGeometry(QRect(50, 50, 61, 31));
        label->setStyleSheet(QString::fromUtf8("font-weight: bold;\n"
"font: 700 12pt \"Arial Rounded MT\";\n"
"color: rgb(255, 255, 255);"));
        lineEdit_2 = new QLineEdit(groupBox);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(170, 50, 141, 43));
        lineEdit_2->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    padding: 8px;\n"
"    border: 1px solid #bbb;\n"
"    border-radius: 4px;\n"
"    background-color: #fff;\n"
"    selection-background-color: #3498db;\n"
"    min-height: 25px;\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border: 1px solid #3498db;\n"
"}"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(50, 130, 71, 16));
        label_2->setStyleSheet(QString::fromUtf8(" font: 700 12pt \"Arial Rounded MT\";\n"
"color: rgb(255, 255, 255);\n"
" font-weight: bold;\n"
"\n"
""));
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(170, 120, 141, 43));
        lineEdit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    padding: 8px;\n"
"    border: 1px solid #bbb;\n"
"    border-radius: 4px;\n"
"    background-color: #fff;\n"
"    selection-background-color: #3498db;\n"
"    min-height: 25px;\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border: 1px solid #3498db;\n"
"}"));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(50, 210, 81, 31));
        label_4->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Arial Rounded MT\";\n"
"    \n"
"color: rgb(255, 255, 255);\n"
"    font-weight: bold;\n"
"\n"
""));
        lineEdit_4 = new QLineEdit(groupBox);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setGeometry(QRect(170, 200, 141, 43));
        lineEdit_4->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    padding: 8px;\n"
"    border: 1px solid #bbb;\n"
"    border-radius: 4px;\n"
"    background-color: #fff;\n"
"    selection-background-color: #3498db;\n"
"    min-height: 25px;\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border: 1px solid #3498db;\n"
"}"));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(50, 300, 91, 21));
        label_5->setStyleSheet(QString::fromUtf8("\n"
"font: 700 12pt \"Arial Rounded MT\";\n"
"color: rgb(255, 255, 255);\n"
"    font-weight: bold;\n"
"\n"
""));
        lineEdit_5 = new QLineEdit(groupBox);
        lineEdit_5->setObjectName("lineEdit_5");
        lineEdit_5->setGeometry(QRect(170, 290, 141, 43));
        lineEdit_5->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    padding: 8px;\n"
"    border: 1px solid #bbb;\n"
"    border-radius: 4px;\n"
"    background-color: #fff;\n"
"    selection-background-color: #3498db;\n"
"    min-height: 25px;\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border: 1px solid #3498db;\n"
"}"));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(390, 320, 130, 41));
        pushButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
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

        retranslateUi(create_account);

        QMetaObject::connectSlotsByName(create_account);
    } // setupUi

    void retranslateUi(QDialog *create_account)
    {
        create_account->setWindowTitle(QCoreApplication::translate("create_account", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("create_account", "Krijo llogari", nullptr));
        label->setText(QCoreApplication::translate("create_account", "Emri:", nullptr));
        label_2->setText(QCoreApplication::translate("create_account", "Id:", nullptr));
        label_4->setText(QCoreApplication::translate("create_account", "Email:", nullptr));
        label_5->setText(QCoreApplication::translate("create_account", "Fjalekalim:", nullptr));
        pushButton->setText(QCoreApplication::translate("create_account", "Krijo", nullptr));
    } // retranslateUi

};

namespace Ui {
    class create_account: public Ui_create_account {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATE_ACCOUNT_H
