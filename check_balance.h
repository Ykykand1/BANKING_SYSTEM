#ifndef CHECK_BALANCE_H
#define CHECK_BALANCE_H

#include <QDialog>

    namespace Ui {
    class check_balance;
}

class check_balance : public QDialog
{
    Q_OBJECT

public:
    explicit check_balance(QWidget *parent = nullptr);
    ~check_balance();
    void setUserData(const QString &userName, int id, double balance = 0.0);
private slots:
    void on_pushButton_clicked();

private:
    Ui::check_balance *ui;
    QString userName;
    int userId;
    double userBalance;
};

#endif
