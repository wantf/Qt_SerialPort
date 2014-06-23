#include <QtGui/QApplication>
#include "sercomm.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    SerComm w;
    w.show();
    
    return a.exec();
}
