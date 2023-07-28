#include "mainwindow.h"
#include "secondform.h"
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


void MainWindow::on_openDialogButton_clicked()
{
    secondForm dialog;
    dialog.exec();
    this->close();
}

