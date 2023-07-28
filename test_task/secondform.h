#ifndef SECONDFORM_H
#define SECONDFORM_H

#include <QDialog>

namespace Ui {
class secondForm;
}

class secondForm : public QDialog
{
    Q_OBJECT

public:
    explicit secondForm(QWidget *parent = nullptr);
    ~secondForm();

private slots:
    void on_createFileButton_clicked();

private:
    Ui::secondForm *ui;
};

#endif // SECONDFORM_H
