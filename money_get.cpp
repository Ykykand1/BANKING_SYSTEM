#include "money_get.h"
#include "ui_money_get.h"
#include "money_account.h"
#include "create_account.h"
#include <QMessageBox>

money_get::money_get(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::money_get)
{
    ui->setupUi(this);
}
//destruktor per te liruar memorjen
money_get::~money_get()
{
    delete ui;
}

void money_get::on_terhiqLeke_clicked()
{
    //Krijon variabla qe mbaj te dhenat e dhene nga fushat
    bool id_eSakte = false;
    int idUser = ui->lineEdit->text().toInt(&id_eSakte);
    bool vlera = false;
    double vleraTerheqjes = ui->lineEdit_2->text().toDouble(&vlera);

    // Verifikimi i perdoruesit nepermjet id
    if(!id_eSakte || idUser <= 0) {
        QMessageBox::warning(this, "Gabim", "ID e gabuar");
        return;
    }

    // Verifikimi i shumes se dhene
    if(!vlera || vleraTerheqjes <= 0.0) {
        QMessageBox::warning(this, "Gabim", "Vlera e terheqjes duhet te jete nje numer me i madhe se 0!");
        return;
    }

    // Kontroll ne qofte se perdoruesi ekziston
    std::vector<Personi> perdorues = create_account::getUsers();
    bool gjeturUser = false;
    std::string username;
    // Iterojme tek vektori per te gjetur id e dhene
    for(const Personi& user : perdorues) {
        if(user.getId() == idUser) {
            gjeturUser = true;
            username = user.getEmri();
            break;
        }
    }
    // nese id nuk ekiston
    if(!gjeturUser) {
        QMessageBox::warning(this, "Gabim", "Nuk u gjet perdorues me kete ID!");
        return;
    }

    // Kontroll ne qofte se perdoruesi ka nje llogari bankare
    int indeksibalances = money_account::kerkoUserBalanca(idUser);
    if(indeksibalances == -1) {
        QMessageBox::warning(this, "Gabim", "Perdoruesi nuk ka llogari bankare!");
        return;
    }

    // Merret balanca nga money_account
    double balancaAktuale = money_account::merrBalanca(idUser);

    // Kontroll ne qofte se ka fonde te mjaftueshme
    if(balancaAktuale < vleraTerheqjes) {
        QMessageBox::warning(this, "Gabim",
                             QString("Fonde te pamjaftueshme!\nBalanca aktuale: $%1\nVlera e kerkuar: $%2")
                                 .arg(balancaAktuale, 0, 'f', 2)
                                 .arg(vleraTerheqjes, 0, 'f', 2));
        return;
    }

    // Perfomohet terheqja
    money_account::balanca_user[indeksibalances].balanca -= vleraTerheqjes;
    double balancaERe = money_account::balanca_user[indeksibalances].balanca;

    // Tregon mesazhin kur terheqja eshte e suksesshme
    QMessageBox::information(this, "Sukses",
                             QString("Terheqja prej $%1 u realizua me sukses nga llogaria e %2 (ID: %3).\n"
                                     "Balanca e re eshte: $%4")
                                 .arg(vleraTerheqjes, 0, 'f', 2)
                                 .arg(QString::fromStdString(username))
                                 .arg(idUser)
                                 .arg(balancaERe, 0, 'f', 2));

    // Pastron fushat e inputit
    ui->lineEdit->clear();
    ui->lineEdit_2->clear();
}
