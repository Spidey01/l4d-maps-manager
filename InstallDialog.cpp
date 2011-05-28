#include "InstallDialog.hpp"

#include <QDialogButtonBox>
#include <QFormLayout>
#include <QLabel>
#include <QLineEdit>

InstallDialog::InstallDialog(QWidget *parent) :
    QDialog(parent)
{
    mLayout = new QFormLayout();

    instructions = new QLabel(tr("<p>Copy the URL from the details page on"
                                 " l4dmaps.com (in your web browser) and"
                                 " paste it into the box below.</p>"));

    mLayout->addWidget(instructions);

    mapUrl = new QLineEdit();
    mLayout->addRow(tr("Map URL"), mapUrl);

    buttons = new QDialogButtonBox(QDialogButtonBox::Ok |
                                   QDialogButtonBox::Cancel);
    connect(buttons, SIGNAL(accepted()), this, SLOT(accept()));
    connect(buttons, SIGNAL(rejected()), this, SLOT(reject()));
    mLayout->addWidget(buttons);

    setLayout(mLayout);
}
