#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "testdialog.h"

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

void MainWindow::on_actionCreate_Virtual_Machine_triggered()
{
    testDialog *test = new testDialog(this);
    test->show();
}

