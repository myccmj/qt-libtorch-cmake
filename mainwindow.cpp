#include <torch/torch.h>
#include "mainwindow.h"
#include "./ui_mainwindow.h"

using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    torch::Tensor tensor = torch::eye(3);
        cout << tensor << endl;
}

MainWindow::~MainWindow()
{
    delete ui;
}

