#include <QApplication>
#include <QPushButton>
#include "tabdialog.h"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);

    QString fileName;

    if (argc >= 2)
        fileName = argv[1];
    else
        fileName = ".";

    TabDialog tabdialog(fileName);
    tabdialog.show();
    return QApplication::exec();
}
