#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStandardItemModel>

static const int CALLSTATE_LABLEVIEW_COLUMN_NUM = 10;
static const QString CALLSTATE_LABLEVIEW_HEADER[CALLSTATE_LABLEVIEW_COLUMN_NUM] =
                     {"Sequence","Mod-Cha","Type","LineState","State","R/DTMF","S/DTMF","R/FSK","S/FSK","ERROR"};

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit    MainWindow(QWidget *parent = 0);
    void        SetCallStateLableViewHeader();
    ~MainWindow();

private slots:
    void        on_actionSettings_triggered();

private:
    Ui::MainWindow                * ui;
    QStandardItemModel            * ModelData;
};

#endif // MAINWINDOW_H
