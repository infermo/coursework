/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *ChoiceOfPath;
    QPushButton *ChoiceFileName;
    QLabel *label;
    QLabel *label_2;
    QLabel *statusBar;
    QLabel *label_4;
    QLabel *fileName;
    QLineEdit *inputLen;
    QPushButton *ChoiceFileName_2;
    QLabel *label_5;
    QLineEdit *inputNoiseLen;
    QLabel *label_3;
    QLabel *statusBar_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(795, 468);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        ChoiceOfPath = new QPushButton(centralwidget);
        ChoiceOfPath->setObjectName(QString::fromUtf8("ChoiceOfPath"));
        ChoiceOfPath->setGeometry(QRect(540, 160, 101, 41));
        ChoiceFileName = new QPushButton(centralwidget);
        ChoiceFileName->setObjectName(QString::fromUtf8("ChoiceFileName"));
        ChoiceFileName->setGeometry(QRect(540, 260, 101, 41));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 20, 131, 51));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 260, 281, 41));
        statusBar = new QLabel(centralwidget);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        statusBar->setGeometry(QRect(310, 160, 171, 41));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 160, 281, 41));
        label_4->setFocusPolicy(Qt::StrongFocus);
        label_4->setLayoutDirection(Qt::LeftToRight);
        label_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        fileName = new QLabel(centralwidget);
        fileName->setObjectName(QString::fromUtf8("fileName"));
        fileName->setGeometry(QRect(310, 260, 191, 41));
        inputLen = new QLineEdit(centralwidget);
        inputLen->setObjectName(QString::fromUtf8("inputLen"));
        inputLen->setGeometry(QRect(170, 40, 71, 21));
        ChoiceFileName_2 = new QPushButton(centralwidget);
        ChoiceFileName_2->setObjectName(QString::fromUtf8("ChoiceFileName_2"));
        ChoiceFileName_2->setGeometry(QRect(540, 390, 101, 41));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 390, 361, 41));
        label_5->setFocusPolicy(Qt::StrongFocus);
        label_5->setLayoutDirection(Qt::LeftToRight);
        label_5->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        inputNoiseLen = new QLineEdit(centralwidget);
        inputNoiseLen->setObjectName(QString::fromUtf8("inputNoiseLen"));
        inputNoiseLen->setGeometry(QRect(170, 340, 71, 21));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 320, 141, 51));
        statusBar_2 = new QLabel(centralwidget);
        statusBar_2->setObjectName(QString::fromUtf8("statusBar_2"));
        statusBar_2->setGeometry(QRect(390, 390, 111, 41));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        ChoiceOfPath->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\261\321\200\320\260\321\202\321\214 \320\277\321\203\321\202\321\214", nullptr));
        ChoiceFileName->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\261\321\200\320\260\321\202\321\214 \321\204\320\260\320\271\320\273", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \321\200\320\260\320\267\320\274\320\265\321\200 \320\277\320\260\320\272\320\265\321\202\320\260", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265 \321\204\320\260\320\271\320\273, \320\262 \320\272\320\276\321\202\320\276\321\200\321\213\320\271 \321\205\320\276\321\202\320\270\321\202\320\265 \320\262\320\275\320\265\321\201\321\202\320\270 \320\277\320\276\320\274\320\265\321\205\320\270", nullptr));
        statusBar->setText(QString());
        label_4->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265 \320\264\320\270\321\200\320\265\320\272\321\202\320\276\321\200\320\270\321\216, \320\272\321\203\320\264\320\260 \321\205\320\276\321\202\320\270\321\202\320\265 \321\201\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \320\277\320\260\320\272\320\265\321\202", nullptr));
        fileName->setText(QString());
        ChoiceFileName_2->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\261\321\200\320\260\321\202\321\214 \321\204\320\260\320\271\320\273", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265 \320\264\320\270\321\200\320\265\320\272\321\202\320\276\321\200\320\270\321\216, \320\272\321\203\320\264\320\260 \321\205\320\276\321\202\320\270\321\202\320\265 \321\201\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \320\267\320\260\321\210\321\203\320\274\320\273\320\265\320\275\320\275\321\213\320\271  \320\277\320\260\320\272\320\265\321\202", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\272\320\276\320\273\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \321\210\321\203\320\274\320\260", nullptr));
        statusBar_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
