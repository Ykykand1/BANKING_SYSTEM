#include "mainwindow.h"
#include "money_get.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ptrcreate_acccount = new create_account;
    ptrmoney_account = new money_account;
    ptrcheck_balance = new check_balance;
    ptrmoney_get = new money_get;


}

//destruktor per te liruar memorjen
MainWindow::~MainWindow()
{
    delete ptrcreate_acccount;
    delete ptrmoney_account;
    delete ptrcheck_balance;
    delete ptrmoney_get;

    delete ui;
}

//funksionet per cdo buton ne klikim
void MainWindow::on_dalja_clicked()
{
    QApplication::exit();
}


void MainWindow::on_Create_clicked()
{
    ptrcreate_acccount->show();
}

void MainWindow::on_Add_clicked()
{
    ptrmoney_account->show();
}

void MainWindow::on_Check_clicked()
{
    ptrcheck_balance->show();
}

void MainWindow::on_pushButton_clicked()
{
    ptrmoney_get->show();
}




