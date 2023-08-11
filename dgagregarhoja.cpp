#include "dgagregarhoja.h"
#include "ui_dgagregarhoja.h"
#include "node.h"

dgAgregarHoja::dgAgregarHoja(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dgAgregarHoja)
{
    ui->setupUi(this);
    mainWindow = qobject_cast<MainWindow*>(parentWidget());

    if(mainWindow->Nodos == 0){
        ui->cbPosicion->addItem("Inicio");
    } else{
    ui->cbPosicion->addItem("Derecha");
    ui->cbPosicion->addItem("Izquierda");
    }
    ui->cbPosicion->setCurrentIndex(-1);
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
    } else {
        if(ui->cbPosicion->currentText() == "Inicio"){
            Node* Nodo = new Node(ui->ValorTexto->toPlainText().toInt());
            this->mainWindow->NodoInicial = Nodo;
            this->mainWindow->Nodos++;
            this->mainWindow->update();
            this->close();


        return;
        }
    }



}

