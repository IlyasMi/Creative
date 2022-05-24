/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *Calculate;
    QPushButton *Delete_all;
    QPushButton *plata;
    QPushButton *Calculate_ST;
    QPushButton *stavvvka;
    QPushButton *Calculate_SUM_2;
    QPushButton *Summa;
    QPushButton *Calculate_srok;
    QPushButton *Srok;
    QWidget *widget;
    QGridLayout *gridLayout;
    QSpinBox *Stavka;
    QSpinBox *Sum;
    QSpinBox *Months;
    QLabel *label_ST;
    QLabel *label_SUM;
    QLabel *label_SROK;
    QWidget *widget1;
    QGridLayout *gridLayout_2;
    QLabel *label_ITOG;
    QLabel *Pay;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(818, 434);
        MainWindow->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/img/Crabs_3.jpg);\n"
""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Calculate = new QPushButton(centralwidget);
        Calculate->setObjectName(QString::fromUtf8("Calculate"));
        Calculate->setGeometry(QRect(20, 380, 111, 41));
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        Calculate->setFont(font);
        Calculate->setAutoFillBackground(false);
        Calculate->setStyleSheet(QString::fromUtf8("color:white;\n"
"background-color:red;\n"
"border: 3px solid white;\n"
"width:500px;\n"
"padding:3px 7px;\n"
""));
        Delete_all = new QPushButton(centralwidget);
        Delete_all->setObjectName(QString::fromUtf8("Delete_all"));
        Delete_all->setGeometry(QRect(670, 360, 111, 41));
        Delete_all->setFont(font);
        Delete_all->setStyleSheet(QString::fromUtf8("color:white;\n"
"background-color:red;\n"
"border: 3px solid white;\n"
"width:500px;\n"
"padding:3px 7px;\n"
""));
        plata = new QPushButton(centralwidget);
        plata->setObjectName(QString::fromUtf8("plata"));
        plata->setGeometry(QRect(20, 340, 111, 41));
        plata->setFont(font);
        plata->setAutoFillBackground(false);
        plata->setStyleSheet(QString::fromUtf8("color:white;\n"
"background-color:red;\n"
"border: 3px solid white;\n"
"width:500px;\n"
"padding:3px 7px;\n"
""));
        Calculate_ST = new QPushButton(centralwidget);
        Calculate_ST->setObjectName(QString::fromUtf8("Calculate_ST"));
        Calculate_ST->setGeometry(QRect(170, 380, 111, 41));
        Calculate_ST->setFont(font);
        Calculate_ST->setAutoFillBackground(false);
        Calculate_ST->setStyleSheet(QString::fromUtf8("color:white;\n"
"background-color:red;\n"
"border: 3px solid white;\n"
"width:500px;\n"
"padding:3px 7px;\n"
""));
        stavvvka = new QPushButton(centralwidget);
        stavvvka->setObjectName(QString::fromUtf8("stavvvka"));
        stavvvka->setGeometry(QRect(170, 340, 111, 41));
        stavvvka->setFont(font);
        stavvvka->setAutoFillBackground(false);
        stavvvka->setStyleSheet(QString::fromUtf8("color:white;\n"
"background-color:red;\n"
"border: 3px solid white;\n"
"width:500px;\n"
"padding:3px 7px;\n"
""));
        Calculate_SUM_2 = new QPushButton(centralwidget);
        Calculate_SUM_2->setObjectName(QString::fromUtf8("Calculate_SUM_2"));
        Calculate_SUM_2->setGeometry(QRect(320, 380, 111, 41));
        Calculate_SUM_2->setFont(font);
        Calculate_SUM_2->setAutoFillBackground(false);
        Calculate_SUM_2->setStyleSheet(QString::fromUtf8("color:white;\n"
"background-color:red;\n"
"border: 3px solid white;\n"
"width:500px;\n"
"padding:3px 7px;\n"
""));
        Summa = new QPushButton(centralwidget);
        Summa->setObjectName(QString::fromUtf8("Summa"));
        Summa->setGeometry(QRect(320, 340, 111, 41));
        Summa->setFont(font);
        Summa->setAutoFillBackground(false);
        Summa->setStyleSheet(QString::fromUtf8("color:white;\n"
"background-color:red;\n"
"border: 3px solid white;\n"
"width:500px;\n"
"padding:3px 7px;\n"
""));
        Calculate_srok = new QPushButton(centralwidget);
        Calculate_srok->setObjectName(QString::fromUtf8("Calculate_srok"));
        Calculate_srok->setGeometry(QRect(470, 380, 111, 41));
        Calculate_srok->setFont(font);
        Calculate_srok->setAutoFillBackground(false);
        Calculate_srok->setStyleSheet(QString::fromUtf8("color:white;\n"
"background-color:red;\n"
"border: 3px solid white;\n"
"width:500px;\n"
"padding:3px 7px;\n"
""));
        Srok = new QPushButton(centralwidget);
        Srok->setObjectName(QString::fromUtf8("Srok"));
        Srok->setGeometry(QRect(470, 340, 111, 41));
        Srok->setFont(font);
        Srok->setAutoFillBackground(false);
        Srok->setStyleSheet(QString::fromUtf8("color:white;\n"
"background-color:red;\n"
"border: 3px solid white;\n"
"width:500px;\n"
"padding:3px 7px;\n"
""));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(22, 30, 723, 201));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        Stavka = new QSpinBox(widget);
        Stavka->setObjectName(QString::fromUtf8("Stavka"));
        Stavka->setStyleSheet(QString::fromUtf8("color:white;\n"
"background-color:red;\n"
"border: 3px solid white;\n"
"width:500px;\n"
"padding:3px 7px;"));
        Stavka->setMinimum(1);

        gridLayout->addWidget(Stavka, 0, 1, 1, 1);

        Sum = new QSpinBox(widget);
        Sum->setObjectName(QString::fromUtf8("Sum"));
        Sum->setStyleSheet(QString::fromUtf8("color:white;\n"
"background-color:red;\n"
"border: 3px solid white;\n"
"width:500px;\n"
"padding:3px 7px;"));
        Sum->setMinimum(1);
        Sum->setMaximum(999999999);
        Sum->setSingleStep(10000);

        gridLayout->addWidget(Sum, 1, 1, 1, 1);

        Months = new QSpinBox(widget);
        Months->setObjectName(QString::fromUtf8("Months"));
        Months->setStyleSheet(QString::fromUtf8("color:white;\n"
"background-color:red;\n"
"border: 3px solid white;\n"
"width:500px;\n"
"padding:3px 7px;"));
        Months->setMinimum(1);
        Months->setMaximum(480);

        gridLayout->addWidget(Months, 2, 1, 1, 1);

        label_ST = new QLabel(widget);
        label_ST->setObjectName(QString::fromUtf8("label_ST"));
        label_ST->setStyleSheet(QString::fromUtf8("color:white;\n"
"background-color:red;\n"
"border: 3px solid white;\n"
"width:500px;\n"
"padding:3px 7px;"));

        gridLayout->addWidget(label_ST, 0, 0, 1, 1);

        label_SUM = new QLabel(widget);
        label_SUM->setObjectName(QString::fromUtf8("label_SUM"));
        label_SUM->setStyleSheet(QString::fromUtf8("color:white;\n"
"background-color:red;\n"
"border: 3px solid white;\n"
"width:500px;\n"
"padding:3px 7px;"));

        gridLayout->addWidget(label_SUM, 1, 0, 1, 1);

        label_SROK = new QLabel(widget);
        label_SROK->setObjectName(QString::fromUtf8("label_SROK"));
        label_SROK->setStyleSheet(QString::fromUtf8("color:white;\n"
"background-color:red;\n"
"border: 3px solid white;\n"
"width:500px;\n"
"padding:3px 7px;"));

        gridLayout->addWidget(label_SROK, 2, 0, 1, 1);

        widget1 = new QWidget(centralwidget);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(200, 270, 401, 38));
        gridLayout_2 = new QGridLayout(widget1);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_ITOG = new QLabel(widget1);
        label_ITOG->setObjectName(QString::fromUtf8("label_ITOG"));
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(true);
        font1.setItalic(true);
        label_ITOG->setFont(font1);
        label_ITOG->setStyleSheet(QString::fromUtf8("color:white;\n"
"background-color:red;\n"
"border: 3px solid white;\n"
"width:500px;\n"
"padding:3px 7px;\n"
""));

        gridLayout_2->addWidget(label_ITOG, 0, 0, 1, 1);

        Pay = new QLabel(widget1);
        Pay->setObjectName(QString::fromUtf8("Pay"));
        Pay->setFont(font1);
        Pay->setStyleSheet(QString::fromUtf8("color:white;\n"
"background-color:red;\n"
"border: 3px solid white;\n"
"width:500px;\n"
"padding:3px 7px;"));

        gridLayout_2->addWidget(Pay, 0, 1, 1, 1);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        Calculate->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\321\201\321\207\320\270\321\202\320\260\321\202\321\214", nullptr));
        Delete_all->setText(QCoreApplication::translate("MainWindow", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214", nullptr));
        plata->setText(QCoreApplication::translate("MainWindow", "\320\237\320\273\320\260\321\202\320\265\320\266", nullptr));
        Calculate_ST->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\321\201\321\207\320\270\321\202\320\260\321\202\321\214", nullptr));
        stavvvka->setText(QCoreApplication::translate("MainWindow", "\320\241\321\202\320\260\320\262\320\272\320\260", nullptr));
        Calculate_SUM_2->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\321\201\321\207\320\270\321\202\320\260\321\202\321\214", nullptr));
        Summa->setText(QCoreApplication::translate("MainWindow", "\320\241\321\203\320\274\320\274\320\260", nullptr));
        Calculate_srok->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\321\201\321\207\320\270\321\202\320\260\321\202\321\214", nullptr));
        Srok->setText(QCoreApplication::translate("MainWindow", "\320\241\321\200\320\276\320\272", nullptr));
        label_ST->setText(QCoreApplication::translate("MainWindow", "\320\223\320\276\320\264\320\276\320\262\320\260\321\217 \321\201\321\202\320\260\320\262\320\272\320\260(%): ", nullptr));
        label_SUM->setText(QCoreApplication::translate("MainWindow", "\320\241\321\203\320\274\320\274\320\260 \320\272\321\200\320\265\320\264\320\270\321\202\320\260(\321\200\321\203\320\261):  ", nullptr));
        label_SROK->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260 \320\272\320\260\320\272\320\276\320\271 \321\201\321\200\320\276\320\272(\320\274\320\265\321\201):", nullptr));
        label_ITOG->setText(QCoreApplication::translate("MainWindow", "\320\225\320\266\320\265\320\274\320\265\321\201\321\217\321\207\320\275\321\213\320\271 \320\277\320\273\320\260\321\202\320\265\320\266: ", nullptr));
        Pay->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
