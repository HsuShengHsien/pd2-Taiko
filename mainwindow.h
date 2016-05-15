#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "game.h"
#include <QMainWindow>

namespace Ui{
class MainWindow;
}

class MainWindow : public QMainWindow
{

friend class Dialog;
  Q_OBJECT
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();


private slots:
    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    Game *game;

};


#endif // MAINWINDOW_H