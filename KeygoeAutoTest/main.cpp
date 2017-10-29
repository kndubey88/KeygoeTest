#include "mainwindow.h"
#include "keygoe_auto_test_sub.h"
#include <QApplication>
#include <QDebug>
#include <QDir>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    initSystem();
    qDebug()<< "IPAddress is"<<CfgIPAddress;
    qDebug()<< "IPPort is"<<CfgIPPort;
    w.show();

    return a.exec();
}
