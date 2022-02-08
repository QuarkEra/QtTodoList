#include "mainwindow.h"
#include "ui_mainwindow.h"

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


void MainWindow::on_addItemButton_clicked()
{
    // Check for empty strings, blank strings are added right now
    QString str = ui->lineEdit->text();
    ui->listWidget->addItem(str);
    ui->lineEdit->setText(QString());
}


void MainWindow::on_removeItemButton_clicked()
{
    QListWidgetItem *item = ui->listWidget->takeItem(ui->listWidget->currentRow());
    delete item;
}


void MainWindow::on_removeAllButton_clicked()
{

}

