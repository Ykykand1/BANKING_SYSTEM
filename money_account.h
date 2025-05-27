#ifndef MONEY_ACCOUNT_H
#define MONEY_ACCOUNT_H

#include <QDialog>
#include <vector>
#include "create_account.h"

namespace Ui{
class money_account;
}

struct Balanca_user{
    int idUser;
    double balanca;

    Balanca_user(int id, double balanca ){
        this->idUser = id;
        this->balanca = balanca;
    }
};

class money_account : public QDialog{
    Q_OBJECT

public :
    explicit money_account(QWidget *parent = NULL);
    ~money_account();

    static std::vector<Balanca_user> balanca_user;
    static double merrBalanca(int idUser);
    static int kerkoUserBalanca(int balanca);
private slots:
    void on_depositButton_clicked();

private:
    Ui::money_account *ui;

};

#endif
