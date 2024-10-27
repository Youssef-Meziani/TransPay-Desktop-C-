#ifndef INSCRIPTION_H
#define INSCRIPTION_H

#include <QMainWindow>

namespace Ui {
class Inscription;
}

class Inscription : public QMainWindow
{
    Q_OBJECT

public:
    explicit Inscription(QWidget *parent = nullptr);
    ~Inscription();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Inscription *ui;
};

#endif // INSCRIPTION_H
