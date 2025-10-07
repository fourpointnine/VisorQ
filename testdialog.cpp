#include "testdialog.h"
#include "ui_testdialog.h"
#include "virt.h"

testDialog::testDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::testDialog)
{
    ui->setupUi(this);
}

testDialog::~testDialog()
{
    delete ui;
}

void testDialog::on_pushButton_clicked()
{
    virt testVirt;
    testVirt.testCommand();
}
// void testDialog::validateInput()
// {

// }
