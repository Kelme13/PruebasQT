#include "errorpopup.h"
#include "ui_errorpopup.h"

ErrorPopUp::ErrorPopUp(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ErrorPopUp)
{
    ui->setupUi(this);
}

ErrorPopUp::~ErrorPopUp()
{
    delete ui;
}

void ErrorPopUp::on_pushButton_clicked()
{
    this->accept();
}

