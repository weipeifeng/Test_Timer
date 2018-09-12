#include "MainWindow.h"
#include "ui_MainWindow.h"
#include <QTimer>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    wTimer = new QTimer(this);
    connect(wTimer,SIGNAL(timeout()),this,SLOT(slot_update()));
    wTimer->start(1);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::slot_update()
{
    ui->lineEdit->setText("234");
    ui->lineEdit_2->setText("234");
    ui->lineEdit_3->setText("234");
    ui->lineEdit_4->setText("234");
    ui->lineEdit_5->setText("234");
    ui->lineEdit_6->setText("234");
    ui->lineEdit_7->setText("234");
    ui->lineEdit_8->setText("234");
    ui->lineEdit_9->setText("234");
    ui->lineEdit_10->setText("234");
    ui->lineEdit_11->setText("234");
    ui->lineEdit_12->setText("234");
    ui->lineEdit_13->setText("234");
    ui->lineEdit_14->setText("234");
    ui->lineEdit_15->setText("234");
    ui->lineEdit_16->setText("234");
    ui->lineEdit_17->setText("234");
    ui->lineEdit_18->setText("234");
    ui->lineEdit_19->setText("234");
    ui->lineEdit_20->setText("234");
    ui->lineEdit_21->setText("234");
    ui->lineEdit_22->setText("234");
    ui->lineEdit_23->setText("234");
    ui->lineEdit_24->setText("234");
    ui->lineEdit_25->setText("234");
    ui->lineEdit_26->setText("234");
    ui->lineEdit_27->setText("234");
    ui->lineEdit_28->setText("234");
    ui->lineEdit_29->setText("234");
    ui->lineEdit_30->setText("234");
}
