#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "game.h"
#include "dialog.h"

extern Dialog *dialog;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setFixedSize(this->geometry().width(),this->geometry().height());
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    Game*game =new Game();
    game->show();
}
