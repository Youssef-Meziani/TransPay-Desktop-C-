
#include "authentification.h"

#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Authentification w;
    w.show();
    return a.exec();
}
