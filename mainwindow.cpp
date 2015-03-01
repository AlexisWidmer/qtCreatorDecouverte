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
}

void MainWindow::on_pushButton_clicked()
{
    qApp ->quit();
}

void MainWindow::on_checkBox_clicked()
{

}


void MainWindow::on_checkBox_clicked(bool checked)
{
    if (checked == true)
    {
        showFullScreen();
    }

    else
    {
        showNormal();
    }
}

void MainWindow::on_dial_valueChanged(int value)
{

    QPalette Pal = ui->lcdNumber->palette();
    Pal.setColor(QPalette::WindowText, QColor(value * (255 / 100), 0, 0));
    ui->lcdNumber->setPalette(Pal);
}
