#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "my.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    my->my();
}

MainWindow::~MainWindow()
{
    delete ui;
}

