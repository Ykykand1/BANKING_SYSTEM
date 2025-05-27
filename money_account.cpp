#include "money_account.h"
#include "ui_money_account.h"
#include "create_account.h"
#include <QMessageBox>

// Inicializojme vektorin nga money_account
std::vector<Balanca_user> money_account::balanca_user;

money_account::money_account(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::money_account)
{
    ui->setupUi(this);
}
//destruktor per te liruar te dhenat
money_account::~money_account()
{
    delete ui;
}

//kontrollojme id e dhene duke iteruar te vektori
int money_account::kerkoUserBalanca(int idUser)
{
    for(int i = 0; i < balanca_user.size(); i++) {
        if(balanca_user[i].idUser == idUser) {
            return static_cast<int>(i);
        }
    }
    return -1; // nese nuk eshte gjetur id
}

//kontrollojme ne qofte se balanca eshte me e vogel se zero
double money_account::merrBalanca(int idUser)
{
    int i = kerkoUserBalanca(idUser);
    if(i != -1) {
        return balanca_user[i].balanca;
    }
    return 0.0;
}

//
void money_account::on_depositButton_clicked()
{
    bool id_eSakte = false;
    int idUser = ui->lineEdit->text().toInt(&id_eSakte);
    bool vlera = false;
    double vleraDeposites = ui->lineEdit_2->text().toDouble(&vlera);

    if(!id_eSakte || idUser <= 0) {
        QMessageBox::warning(this, "Gabim", "Id e gabuar");
        return;
    }

    if(!vlera || vleraDeposites <= 0.0) {
        QMessageBox::warning(this, "Gabim", "Vlera e depozites duhet te jete nje numer me i madhe se 0!!");
        return;
    }

    // Move these declarations inside the function
    std::vector<Personi> perdorues = create_account::getUsers();
    bool gjeturUser = false;
    std::string username;

    for(const Personi& user : perdorues) {
        if(user.getId() == idUser) {
            gjeturUser = true;
            username = user.getEmri();
            break;
        }
    }

    if(!gjeturUser) {  // Fixed variable name from gjeturFound to gjeturUser
        QMessageBox::warning(this, "Gabim", "Nuk u gjet perdorues me kete Id!!!");
        return;
    }

    int indeksibalances = kerkoUserBalanca(idUser);
    if(indeksibalances != -1) {
        balanca_user[indeksibalances].balanca += vleraDeposites;
    }
    else {
        balanca_user.emplace_back(idUser, vleraDeposites);
        indeksibalances = static_cast<int>(balanca_user.size() - 1);
    }

    QMessageBox::information(this, "Sukses",
                             QString("Depozita prej $%1 u shtua me sukses në llogarinë e %2 (ID: %3).\n"
                                     "Balanca e re është: $%4")
                                 .arg(vleraDeposites, 0, 'f', 2)
                                 .arg(QString::fromStdString(username))
                                 .arg(idUser)
                                 .arg(balanca_user[indeksibalances].balanca, 0, 'f', 2));

    // Pastrojme fushat
    ui->lineEdit->clear();
    ui->lineEdit_2->clear();
}
