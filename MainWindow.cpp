#include "MainWindow.hpp"
#include "InstallDialog.hpp"

#include <QDebug>
#include <QPushButton>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    installButton = new QPushButton(tr("Install New Map"));
    connect(installButton, SIGNAL(clicked()), SLOT(startInstallDialog()));
    setCentralWidget(installButton);
}

MainWindow::~MainWindow()
{

}

bool
MainWindow::startInstallDialog()
{
    InstallDialog *d = new InstallDialog();

    // Just to be a bastard ^_^
    switch(d->exec()) {
    case InstallDialog::Accepted:
        return true;
    case InstallDialog::Rejected:
    default:
        return false;
    }
}
