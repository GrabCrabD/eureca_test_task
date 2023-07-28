#include "secondform.h"
#include "ui_secondform.h"

#include <QFile>
#include <QTextStream>
#include <QStandardPaths>

secondForm::secondForm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::secondForm)
{
    ui->setupUi(this);
}

secondForm::~secondForm()
{
    delete ui;
}

void secondForm::on_createFileButton_clicked()
{
    QString desktopPath = QStandardPaths::writableLocation(QStandardPaths::DesktopLocation);
    QFile file(desktopPath + "/file.txt");
    if (file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        QTextStream out(&file);
        out << "Миру мир!";
        file.close();
    }
    QCoreApplication::quit();
}

