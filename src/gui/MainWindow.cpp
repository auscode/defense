#include "MainWindow.h"
#include <QMenuBar>
#include <QStatusBar>
#include <QLabel>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent) {

    // Set window title and size
    setWindowTitle("Defense System");
    resize(800, 600);

    // Add a simple menubar
    QMenu *fileMenu = menuBar()->addMenu("&File");
    QAction *exitAction = new QAction("E&xit", this);
    fileMenu->addAction(exitAction);
    connect(exitAction, &QAction::triggered, this, &QWidget::close);

    // Add status bar
    statusBar()->showMessage("Ready");

    // Central widget (placeholder)
    QLabel *label = new QLabel("Defense Control Panel", this);
    label->setAlignment(Qt::AlignCenter);
    setCentralWidget(label);
}

MainWindow::~MainWindow() {}
