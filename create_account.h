// create_account.h (fixed)
#ifndef CREATE_ACCOUNT_H
#define CREATE_ACCOUNT_H

#include <QDialog>
#include <string>
#include <vector>

class Personi {
protected:
    std::string emri;
    int id;
    std::string email;
    std::string passw;

public:
    Personi() : id(0) {}
    Personi(const std::string& emri, int id, const std::string& email, const std::string& passw)
        : emri(emri), id(id), email(email), passw(passw) {}

    // getter dhe setterat
    std::string getEmri() const { return emri; }
    int getId() const { return id; }
    std::string getEmail() const { return email; }
    std::string getPassword() const { return passw; }
};

namespace Ui {
class create_account;
}

class create_account : public QDialog
{
    Q_OBJECT

public:
    explicit create_account(QWidget *parent = nullptr);
    ~create_account();
    static std::vector<Personi> getUsers() { return users; }

private slots:
    void on_pushButton_clicked();

private:
    Ui::create_account *ui;
    static std::vector<Personi> users; // Per te ruajtur perdoruesit e dhene
};

#endif
