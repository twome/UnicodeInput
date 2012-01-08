#include <QtGui/QApplication>
#include "mainwindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    if(!w.unrecoverableError)
    {
	w.show();
	return a.exec();
    }

    return 1;
}
