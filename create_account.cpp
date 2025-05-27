
#include "create_account.h"
#include "ui_create_account.h"
#include <QMessageBox>

//vektori qe do mbaje perdoruesat
std::vector<Personi> create_account::users;

create_account::create_account(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::create_account)
{
    ui->setupUi(this);
}

//desktruktori per te liruar memorjen
create_account::~create_account()
{
    delete ui;
}

void create_account::on_pushButton_clicked()
{
    //inicializimi i variablave qe do mbajne te dhenat qe do jepen tek fushat e krijimit te llogarise
    std::string emri = ui->lineEdit_2->text().toStdString();
    int id = ui->lineEdit->text().toInt();
    std::string email = ui->lineEdit_4->text().toStdString();
    std::string password = ui->lineEdit_5->text().toStdString();

    //kontrollojme nqs njera nga fushat jane boshe
    if (emri.empty() || email.empty() || password.empty() || id <= 0) {
        QMessageBox::warning(this, "Gabim", "Plotesoni te gjitha fushat dhe sigurohuni qe ID eshte numer pozitiv!");
        return;
    }

    //objekti qe do mbaje perdoruesin
    Personi newUser(emri, id, email, password);
    users.push_back(newUser);

    QMessageBox::information(this, "Sukses", "Llogaria juaj u krijua me sukses!");
    accept();

    //pastrimi i fushave
    ui->lineEdit->clear();
    ui->lineEdit_2->clear();
    ui->lineEdit_4->clear();
    ui->lineEdit_5->clear();
}
