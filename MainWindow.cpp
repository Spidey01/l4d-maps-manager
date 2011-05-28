#include "MainWindow.hpp"

#include <QtGui/QPushButton>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    installButton = new QPushButton(tr("Install New Map"));
    setCentralWidget(installButton);
}

MainWindow::~MainWindow()
{

}
