#include <QCoreApplication>

#include<QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    qDebug() <<  "Hellow Qt5 C++ Application";
    return a.exec();
}
