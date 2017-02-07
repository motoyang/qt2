#include <QApplication>
#include <QTranslator>
#include "mainwindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QTranslator *t = new QTranslator;
//    t->load("/Users/moto2yang/cpp/qt/HelloChina/lang_zh.qm");
    t->load("/Users/moto2yang/cpp/qt/HelloChina/lang_en.qm");
    a.installTranslator(t);     // 增加commit说明

    MainWindow w;
    w.show();

    return a.exec();
}
