#include "inscription.h"
#include "ui_inscription.h"
#include "authentification.h"

Inscription::Inscription(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Inscription)
{
    ui->setupUi(this);
}

Inscription::~Inscription()
{
    delete ui;
}

void Inscription::on_pushButton_clicked()
{
    close();
    Authentification *auth = qobject_cast<Authentification*>(parent());
    auth->show();
}

