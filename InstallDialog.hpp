#ifndef INSTALLDIALOG_HPP
#define INSTALLDIALOG_HPP

#include <QDialog>

class QDialogButtonBox;
class QFormLayout;
class QLabel;
class QLineEdit;

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
    QLabel *instructions;
    QLineEdit *mapUrl;
};

#endif // INSTALLDIALOG_HPP
