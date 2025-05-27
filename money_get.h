#ifndef MONEY_GET_H
#define MONEY_GET_H

#include <QDialog>

namespace Ui {
class money_get;
}

class money_get : public QDialog
{
    Q_OBJECT

public:
    explicit money_get(QWidget *parent = nullptr);
    ~money_get();

private slots:
    void on_terhiqLeke_clicked();

private:
    Ui::money_get *ui;
};

#endif // MONEY_GET_H
