#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "create_account.h"
#include "check_balance.h"
#include "money_account.h"
#include "money_get.h"

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private slots:
    void on_dalja_clicked();

    void on_Create_clicked();

    void on_Add_clicked();

    void on_Check_clicked();

    void on_pushButton_clicked();



private:
    Ui::MainWindow *ui;
    create_account *ptrcreate_acccount;
    check_balance *ptrcheck_balance;
    money_account *ptrmoney_account;
    money_get *ptrmoney_get;

};
#endif // MAINWINDOW_H
