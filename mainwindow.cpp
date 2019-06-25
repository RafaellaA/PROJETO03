#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialog.h"
#include <QDebug>
#include <QAction>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //connect(ui->pushButton,SIGNAL(clicked(bool)),this,SLOT(mataTudo()));

    /*connect(ui->horizontalSlider_Frequencia,SIGNAL(valueChanged(int)),
            ui->widget,SLOT(setFrequencia(int)));

    connect(ui->horizontalSlider_Velocidade,SIGNAL(valueChanged(int)),
            ui->widget,SLOT(setVelocidade(int)));*/
    connect(ui->actionAbreDialog, SIGNAL(triggered(bool)),this, SLOT(abreDialog()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

/*void MainWindow::mataTudo()
{
    close();
}

void MainWindow::copiaTexto()
{
    ui->textBrowser->setText(ui->textEdit->toPlainText());
}
*/
void MainWindow::abreDialog()
{
    Dialog d;
    if(d.exec() == QDialog::Accepted){
     qDebug()<<"ok->" <<d.pegaTexto();
    }
    else{
    qDebug()<<"cancel -> " <<d.pegaTexto();
    }
}
