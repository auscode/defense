#include <QApplication>
#include "./gui/MainWindow.h"

using namespace defense::gui;

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    MainWindow w;
    w.show();

    return app.exec();
}
