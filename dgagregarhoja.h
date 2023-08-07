#ifndef DGAGREGARHOJA_H
#define DGAGREGARHOJA_H

#include <QDialog>

namespace Ui {
class dgAgregarHoja;
}

class dgAgregarHoja : public QDialog
{
    Q_OBJECT

public:
    explicit dgAgregarHoja(QWidget *parent = nullptr);
    ~dgAgregarHoja();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::dgAgregarHoja *ui;
};

#endif // DGAGREGARHOJA_H
