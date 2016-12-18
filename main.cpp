#include "wfmuwindow.h"
#include <QApplication>
#include <QResource>

int main(int argc, char *argv[])
{
   // QResource::registerResource("resources.qrc");
    QApplication a(argc, argv);
    wfmuWindow w;
    w.show();

    return a.exec();
}
