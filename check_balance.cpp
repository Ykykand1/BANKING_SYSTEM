#include "check_balance.h"
#include "ui_check_balance.h"
#include "create_account.h" // per te aksesuar vektorin e userave
#include "money_account.h" // per te aksesuar balancat
#include <QMessageBox>


check_balance::check_balance(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::check_balance)
    , userBalance(0.0)  // inicializojme  userBalance
{
    ui->setupUi(this);
}

//destruktor per te liruar memorjen
check_balance::~check_balance()
{
    delete ui;
}

//funksion i cili merr te dhenat e perdoruesit dhe i afishon me ui
void check_balance::setUserData(const QString &userName, int id, double balance)
{
    this->userName = userName;
    this->userId = id;
    this->userBalance = balance;

    ui->lineEdit->setText(userName);
    ui->lineEdit_2->setText(QString::number(userId));

}

void check_balance::on_pushButton_clicked()
{
    //Merr id nga fusha e inputit
    bool idOk = false;
    int enteredId = ui->lineEdit_2->text().toInt(&idOk);

    if (!idOk || enteredId <= 0) {
        QMessageBox::warning(this, "Gabim", "ID e përdoruesit duhet të jetë një numër pozitiv!");
        return;
    }

    // Merr vektorin nga create_account
    std::vector<Personi> users = create_account::getUsers();

    // Gjen perdoruesin
    bool userFound = false;
    QString name;

    for (const Personi& user : users) {
        if (user.getId() == enteredId) {
            userFound = true;
            name = QString::fromStdString(user.getEmri());
            break;
        }
    }

    if (userFound) {

        double balance = money_account::merrBalanca(enteredId);

        QMessageBox::information(this, "Kontrollimi i balances",
                                 QString("Pershendetje %1!\nID juaj: %2\nBalanca juaj eshte: $%3")
                                     .arg(name)
                                     .arg(enteredId)
                                     .arg(balance, 0, 'f', 2));
    } else {
        QMessageBox::warning(this, "Gabim",
                             QString("ID e futur nuk ekziston në sistem. Ju lutem kontrolloni ID tuaj."));
    }

    ui->lineEdit->clear();
    ui->lineEdit_2->clear();
}
