#include "dgagregarhoja.h"
#include "ui_dgagregarhoja.h"

dgAgregarHoja::dgAgregarHoja(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dgAgregarHoja)
{
    ui->setupUi(this);

    ui->comboBox->addItem("nada aun");
}

dgAgregarHoja::~dgAgregarHoja()
{
    delete ui;
}

void dgAgregarHoja::on_pushButton_2_clicked()
{
    accept();
}


void dgAgregarHoja::on_pushButton_clicked()
{
    accept();
}

