#include "mainwindow.h"
#include <QApplication>
#include "score.h"
#include "time.h"
#include "dialog.h"

Score *score_g;
Score *score_f;
Time *time;
Dialog *dialog;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    score_g = new Score();
    score_f = new Score();
    time = new Time();
    dialog = new Dialog();

    return a.exec();
}
