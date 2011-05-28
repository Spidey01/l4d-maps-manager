#include "InstallDialog.hpp"

#include <QDialogButtonBox>
#include <QFormLayout>

InstallDialog::InstallDialog(QWidget *parent) :
    QDialog(parent)
{
    mLayout = new QFormLayout();

    buttons = new QDialogButtonBox(QDialogButtonBox::Ok |
                                   QDialogButtonBox::Cancel);
    connect(buttons, SIGNAL(accepted()), this, SLOT(accept()));
    connect(buttons, SIGNAL(rejected()), this, SLOT(reject()));
    mLayout->addWidget(buttons);

    setLayout(mLayout);
}
