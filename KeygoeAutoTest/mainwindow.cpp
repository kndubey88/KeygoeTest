#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete ModelData;
}

void MainWindow::SetCallStateLableViewHeader()
{
    //colum width
    int wide = ui->callStateView->x()/CALLSTATE_LABLEVIEW_COLUMN_NUM;

    ModelData = new QStandardItemModel();
    ModelData->setColumnCount(CALLSTATE_LABLEVIEW_COLUMN_NUM);
    for(int i=0; i<CALLSTATE_LABLEVIEW_COLUMN_NUM; i++)
    {
        ui->callStateView->setColumnHidden(i,wide);
        ModelData->setHeaderData(i,Qt::Horizontal,CALLSTATE_LABLEVIEW_HEADER[i]);
    }
    ui->callStateView->setModel(ModelData);
    ui->callStateView->horizontalHeader()->setDefaultAlignment(Qt::AlignCenter);
}


void MainWindow::on_actionSettings_triggered()
{
    QIcon StartIcon(":/images/start");
    ui->actionSettings->setIcon(StartIcon);
}
