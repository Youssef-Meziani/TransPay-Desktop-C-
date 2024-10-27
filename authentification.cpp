#include "authentification.h"
#include "ui_authentification.h"
#include "inscription.h"


Authentification::Authentification(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Authentification)
{
    ui->setupUi(this);
}

Authentification::~Authentification()
{
    delete ui;
}



void Authentification::on_pushButton_clicked()
{
    QString username,password;
    username=ui->lineEdit_Username->text();
    password=ui->lineEdit_Password->text();
    if(username=="test"&& password=="test")
    {

         ui->msg->setText("<font color='green'>Le nom et le mot de passe sont  correct</font>");
       // QMessageBox::information(this,"Login","Username and Password are correct");
    }
    else{
        ui->msg->setText("<font color='red'>Le nom ou le mot de passe sont pas correct</font>");
       // QMessageBox::warning(this,"Login","Username or Password are not correct");
    }
}


void Authentification::on_commandLinkButton_clicked()
{
    Inscription *ins = new Inscription(this);
    ins->setAttribute(Qt::WA_DeleteOnClose);
    ins->show();
    this->hide();
}

