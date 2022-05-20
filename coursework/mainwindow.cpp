#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <UtilClass.h>
#include <QFileDialog>
#include <QString>
#include <QDir>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_ChoiceOfPath_clicked()
{
    int lenText = ui->inputLen->text().toUInt();

    QString pathName = QFileDialog::getSaveFileName(this,
                                                         "Выберите путь",
                                                         "C:/Users/SHELE/Desktop");


    if(lenText == 0){
        ui->statusBar->setText("Error!");
        return;
    }

    QByteArray encodeText = UtilClass::GenerateEncodeText(lenText);
    if(!UtilClass::WriteFile(encodeText, pathName)){
        ui->statusBar->setText("Error!");
        return;
    }
    else{
        ui->statusBar->setText("Successfully!");
    }
}


void MainWindow::on_ChoiceFileName_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this,
                                                    "Выберите файл",
                                                    "C:/Users/SHELE/Desktop");
    ui->fileName->setText(fileName);
}

void MainWindow::on_ChoiceFileName_2_clicked()
{
    int inputNoiseLen = ui->inputNoiseLen->text().toUInt();
    QString filePath = ui->fileName->text();
    QString pathName = QFileDialog::getSaveFileName(this,
                                                         "Выберите путь",
                                                         "C:/Users/SHELE/Desktop");

    QByteArray readedText = UtilClass::ReadArrayFromFile(filePath);
    if(readedText == nullptr){
        ui->statusBar_2->setText("Error!");
        return;
    }

    QByteArray corruptedText = UtilClass::GenerateNoiseEncodeText(readedText, inputNoiseLen);
    if(!UtilClass::WriteFile(corruptedText, pathName)){
        ui->statusBar->setText("Error!");
        return;
    }
    else{
        ui->statusBar_2->setText("Successfully!");
    }
}






