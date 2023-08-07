#include "mainwindow.h"
#include "./ui_mainwindow.h"

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

