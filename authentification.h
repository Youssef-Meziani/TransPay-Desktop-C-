
#ifndef AUTHENTIFICATION_H
#define AUTHENTIFICATION_H

#include <QMainWindow>



QT_BEGIN_NAMESPACE
namespace Ui { class Authentification; }
QT_END_NAMESPACE

class Authentification : public QMainWindow

{
    Q_OBJECT

public:
    Authentification(QWidget *parent = nullptr);
    ~Authentification();

private slots:
    void on_pushButton_clicked();

    void on_commandLinkButton_clicked();

private:
    Ui::Authentification *ui;

};

#endif // AUTHENTIFICATION_H
