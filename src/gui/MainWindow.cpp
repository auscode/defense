#include "MainWindow.h"
#include "./ui_mainwindow.h"
#include <QMenuBar>
#include <QStatusBar>

namespace defense {
namespace gui {

MainWindow::MainWindow(QWidget* parent) : QMainWindow(parent), ui(new Ui::MainWindow) {
    setWindowTitle("Defense Simulation Suite");
    resize(800, 600);

    ui->setupUi(this);
}

MainWindow::~MainWindow() {
    delete ui;
}

} // namespace gui
} // namespace defense
