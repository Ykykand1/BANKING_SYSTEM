/********************************************************************************
** Form generated from reading UI file 'value_exchange.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VALUE_EXCHANGE_H
#define UI_VALUE_EXCHANGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_value_exchange
{
public:
    QTableWidget *currencyTable;
    QPushButton *refreshButton;

    void setupUi(QDialog *value_exchange)
    {
        if (value_exchange->objectName().isEmpty())
            value_exchange->setObjectName("value_exchange");
        value_exchange->resize(555, 381);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(value_exchange->sizePolicy().hasHeightForWidth());
        value_exchange->setSizePolicy(sizePolicy);
        value_exchange->setModal(false);
        currencyTable = new QTableWidget(value_exchange);
        if (currencyTable->columnCount() < 7)
            currencyTable->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        currencyTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        currencyTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        currencyTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        currencyTable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        currencyTable->setObjectName("currencyTable");
        currencyTable->setGeometry(QRect(70, 40, 401, 211));
        currencyTable->setColumnCount(7);
        refreshButton = new QPushButton(value_exchange);
        refreshButton->setObjectName("refreshButton");
        refreshButton->setGeometry(QRect(70, 280, 130, 41));
        refreshButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        retranslateUi(value_exchange);

        QMetaObject::connectSlotsByName(value_exchange);
    } // setupUi

    void retranslateUi(QDialog *value_exchange)
    {
        value_exchange->setWindowTitle(QCoreApplication::translate("value_exchange", "Kembimi Valutor", nullptr));
        QTableWidgetItem *___qtablewidgetitem = currencyTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("value_exchange", "Kodi i valutes", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = currencyTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("value_exchange", "Emri i valutes", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = currencyTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("value_exchange", "Vlera ( per $)", nullptr));
        refreshButton->setText(QCoreApplication::translate("value_exchange", "Rishfaq Vlerat", nullptr));
    } // retranslateUi

};

namespace Ui {
    class value_exchange: public Ui_value_exchange {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VALUE_EXCHANGE_H
