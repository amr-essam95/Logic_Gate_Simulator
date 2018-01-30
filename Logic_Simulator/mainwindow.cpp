#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dragwidget.h"
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->verticalLayout->addWidget(new DragWidget);

//    int w = ui->and_label->width();
//    int h = ui->and_label->height();
//    QPixmap and_pix("C:/Users/amres/Documents/logic/Logic_Gate_Simulator/and.png");
//    ui->and_label->setPixmap(and_pix.scaled(w,h,Qt::KeepAspectRatio));
}

MainWindow::~MainWindow()
{
    delete ui;
}
