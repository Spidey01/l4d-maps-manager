#ifndef INSTALLDIALOG_HPP
#define INSTALLDIALOG_HPP

#include <QDialog>

class QDialogButtonBox;
class QFormLayout;

class InstallDialog : public QDialog
{
    Q_OBJECT
public:
    explicit InstallDialog(QWidget *parent = 0);

signals:

public slots:

private:
    QDialogButtonBox *buttons;
    QFormLayout *mLayout;

};

#endif // INSTALLDIALOG_HPP
