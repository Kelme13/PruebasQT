#include "dgagregarhoja.h"
#include "ui_dgagregarhoja.h"
#include "errorpopup.h"

dgAgregarHoja::dgAgregarHoja(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dgAgregarHoja)
{
    ui->setupUi(this);

    ui->cbPosicion->addItem("Derecha");
    ui->cbPosicion->addItem("Izquierda");

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
    if(ui->ValorTexto->toPlainText().isEmpty()){
        ErrorPopUp* Error = new ErrorPopUp(this);
        Error->show();
        return;
    }
}

