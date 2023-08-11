#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "dgagregarhoja.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_btn2_clicked()
{
    ui->staPaginas->setCurrentIndex(0);
}


void MainWindow::on_btn1_clicked()
{
    ui->staPaginas->setCurrentIndex(1);
}


void MainWindow::on_btn3_clicked()
{
    ui->staPaginas->setCurrentIndex(2);

}


void MainWindow::on_alertasBtn_clicked()
{
    dgAgregarHoja * dialog = new dgAgregarHoja(this);
    dialog->show();
}

void MainWindow::drawNodes(QPainter& painter, Node* node, int centerX, int centerY)
{
    painter.setPen(Qt::black);
    painter.setBrush(Qt::blue);

    int radius = 20;
    painter.drawEllipse(centerX - radius, centerY - radius, radius * 2, radius * 2);
    painter.setPen(Qt::white);
    painter.drawText(centerX - radius, centerY - radius, radius * 2, radius * 2, Qt::AlignCenter, QString::number(node->Value));
}

void MainWindow::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event);

    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing);

    int centerX = width() / 2;
    int centerY = height() / 2;

    if(NodoInicial != nullptr){
        this->drawNodes(painter, NodoInicial, centerX, centerY);
        qDebug() << "Nodo Inicial";
    }


}
