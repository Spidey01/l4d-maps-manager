#ifndef MAINWINDOW_HPP
#define MAINWINDOW_HPP

#include <QtGui/QMainWindow>

class QPushButton;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    QPushButton *installButton;
};

#endif // MAINWINDOW_HPP
