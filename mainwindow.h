#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "node.h"
#include <QPainter>
#include <QDebug>

QT_BEGIN_NAMESPACE

namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    int Nodos = 0;
    Node* NodoInicial = nullptr;
    void paintEvent(QPaintEvent *event) override;
    void drawNodes(QPainter& painter, Node* node, int centerX, int centerY);


private slots:
    void on_btn2_clicked();

    void on_btn1_clicked();

    void on_btn3_clicked();

    void on_alertasBtn_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
