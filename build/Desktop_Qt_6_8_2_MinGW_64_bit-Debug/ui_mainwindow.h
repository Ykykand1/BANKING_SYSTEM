/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *Add;
    QPushButton *Create;
    QPushButton *dalja;
    QPushButton *Check;
    QPushButton *pushButton;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QStatusBar *statusbar;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(698, 435);
        MainWindow->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QString::fromUtf8("background-image: url(:/foto2/pexels-njeromin-13965386.jpg);\n"
"background-repeat: no-repeat;\n"
"background-position: center;\n"
"background-origin: content;\n"
"background-attachment: fixed;\n"
"border-image: url(:/foto2/pexels-njeromin-13965386.jpg) 0 0 0 0 stretch stretch;\n"
""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setAutoFillBackground(false);
        centralwidget->setStyleSheet(QString::fromUtf8(""));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(200, 40, 261, 61));
        label->setStyleSheet(QString::fromUtf8("\n"
"font: italic 28pt \"Arial\";\n"
"background: transparent;\n"
"color: black;\n"
""));
        Add = new QPushButton(centralwidget);
        Add->setObjectName("Add");
        Add->setGeometry(QRect(180, 170, 131, 51));
        Add->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        Add->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #3498db;   /* Blue background */\n"
"    color: white;                /* White text */\n"
"    border: none;\n"
"    border-radius: 6px;\n"
"    padding: 6px 12px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #2980b9;   /* Darker blue on hover */\n"
"}\n"
""));
        Create = new QPushButton(centralwidget);
        Create->setObjectName("Create");
        Create->setGeometry(QRect(20, 170, 141, 51));
        Create->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        Create->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #3498db;   /* Blue background */\n"
"    color: white;                /* White text */\n"
"    border: none;\n"
"    border-radius: 6px;\n"
"    padding: 6px 12px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #2980b9;   /* Darker blue on hover */\n"
"}\n"
""));
        dalja = new QPushButton(centralwidget);
        dalja->setObjectName("dalja");
        dalja->setGeometry(QRect(290, 310, 101, 41));
        dalja->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        dalja->setStyleSheet(QString::fromUtf8("\n"
"    color: white;               \n"
"    border: none;\n"
"    border-radius: 6px;\n"
"    padding: 6px 12px;\n"
"\n"
"\n"
"\n"
""));
        Check = new QPushButton(centralwidget);
        Check->setObjectName("Check");
        Check->setGeometry(QRect(510, 170, 151, 51));
        Check->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        Check->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #3498db;   /* Blue background */\n"
"    color: white;                /* White text */\n"
"    border: none;\n"
"    border-radius: 6px;\n"
"    padding: 6px 12px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #2980b9;   /* Darker blue on hover */\n"
"}\n"
""));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(350, 170, 121, 51));
        pushButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #3498db;   /* Blue background */\n"
"    color: white;                /* White text */\n"
"    border: none;\n"
"    border-radius: 6px;\n"
"    padding: 6px 12px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #2980b9;   /* Darker blue on hover */\n"
"}\n"
""));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(30, 180, 31, 31));
        label_2->setStyleSheet(QString::fromUtf8("image: url(:/foto1/Downloads/account_circle_24dp_E3E3E3_FILL0_wght400_GRAD0_opsz24.png);"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(190, 180, 31, 31));
        label_3->setStyleSheet(QString::fromUtf8("image: url(:/foto1/Downloads/payments_24dp_E3E3E3_FILL0_wght400_GRAD0_opsz24.png);"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(520, 180, 31, 31));
        label_4->setStyleSheet(QString::fromUtf8("image: url(:/foto1/Downloads/account_balance_24dp_E3E3E3_FILL0_wght400_GRAD0_opsz24.png);"));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(360, 180, 31, 31));
        label_5->setStyleSheet(QString::fromUtf8("image: url(:/foto1/Downloads/money_bag_24dp_E3E3E3_FILL0_wght400_GRAD0_opsz24.png);"));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(300, 320, 31, 21));
        label_6->setStyleSheet(QString::fromUtf8("image: url(:/foto1/Downloads/close_24dp_E3E3E3_FILL0_wght400_GRAD0_opsz24.png);"));
        MainWindow->setCentralWidget(centralwidget);
        label->raise();
        Add->raise();
        dalja->raise();
        Check->raise();
        pushButton->raise();
        label_3->raise();
        label_4->raise();
        label_5->raise();
        label_6->raise();
        Create->raise();
        label_2->raise();
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 698, 21));
        MainWindow->setMenuBar(menuBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Sistemi Bankar", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Sistemi Bankar ", nullptr));
        Add->setText(QCoreApplication::translate("MainWindow", "          Shto leke", nullptr));
        Create->setText(QCoreApplication::translate("MainWindow", "      Krijo llogari", nullptr));
        dalja->setText(QCoreApplication::translate("MainWindow", "         Exit", nullptr));
        Check->setText(QCoreApplication::translate("MainWindow", "           Kontrollo Bilancin", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "          Terhiq leke", nullptr));
        label_2->setText(QString());
        label_3->setText(QString());
        label_4->setText(QString());
        label_5->setText(QString());
        label_6->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
