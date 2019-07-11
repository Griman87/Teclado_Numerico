/********************************************************************************
** Form generated from reading UI file 'teclado_numerico.ui'
**
** Created: Thu 27. Mar 16:39:20 2014
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TECLADO_NUMERICO_H
#define UI_TECLADO_NUMERICO_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Teclado_numericoClass
{
public:
    QWidget *centralWidget;
    QFrame *Teclado;
    QPushButton *Teclado_7;
    QPushButton *Teclado_8;
    QPushButton *Teclado_9;
    QPushButton *Teclado_4;
    QPushButton *Teclado_5;
    QPushButton *Teclado_6;
    QPushButton *Teclado_1;
    QPushButton *Teclado_2;
    QPushButton *Teclado_3;
    QPushButton *Teclado_coma;
    QPushButton *Teclado_0;
    QPushButton *Teclado_cl;
    QPushButton *Teclado_ok;
    QPushButton *Teclado_cancel;
    QPushButton *Boton;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Teclado_numericoClass)
    {
        if (Teclado_numericoClass->objectName().isEmpty())
            Teclado_numericoClass->setObjectName(QString::fromUtf8("Teclado_numericoClass"));
        Teclado_numericoClass->resize(800, 480);
        centralWidget = new QWidget(Teclado_numericoClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        Teclado = new QFrame(centralWidget);
        Teclado->setObjectName(QString::fromUtf8("Teclado"));
        Teclado->setGeometry(QRect(380, 30, 220, 360));
        Teclado->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        Teclado->setFrameShape(QFrame::StyledPanel);
        Teclado->setFrameShadow(QFrame::Raised);
        Teclado_7 = new QPushButton(Teclado);
        Teclado_7->setObjectName(QString::fromUtf8("Teclado_7"));
        Teclado_7->setGeometry(QRect(10, 10, 60, 60));
        QFont font;
        font.setFamily(QString::fromUtf8("Verdana"));
        font.setPointSize(36);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        Teclado_7->setFont(font);
        Teclado_7->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: white;\n"
"border: 2px solid #5E5E5E;\n"
"border-radius: 11px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.5, cy: -0.5,\n"
"fx: 0.5, fy:-0.1,\n"
"radius: 1.3, stop: 0 rgba(198,198,198, 255), stop: 1 rgba(50, 50,50,50));\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background: qradialgradient(cx: 0.5, cy: -0.5,\n"
"fx: 0.5, fy: -0.1,\n"
"radius: 1.35, stop: 0 rgba(50, 50,50,50), stop: 1 rgba(198, 198,198, 255));\n"
"}"));
        Teclado_8 = new QPushButton(Teclado);
        Teclado_8->setObjectName(QString::fromUtf8("Teclado_8"));
        Teclado_8->setGeometry(QRect(80, 10, 60, 60));
        Teclado_8->setFont(font);
        Teclado_8->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: white;\n"
"border: 2px solid #5E5E5E;\n"
"border-radius: 11px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.5, cy: -0.5,\n"
"fx: 0.5, fy:-0.1,\n"
"radius: 1.3, stop: 0 rgba(198,198,198, 255), stop: 1 rgba(50, 50,50,50));\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background: qradialgradient(cx: 0.5, cy: -0.5,\n"
"fx: 0.5, fy: -0.1,\n"
"radius: 1.35, stop: 0 rgba(50, 50,50,50), stop: 1 rgba(198, 198,198, 255));\n"
"}"));
        Teclado_9 = new QPushButton(Teclado);
        Teclado_9->setObjectName(QString::fromUtf8("Teclado_9"));
        Teclado_9->setGeometry(QRect(150, 10, 60, 60));
        Teclado_9->setFont(font);
        Teclado_9->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: white;\n"
"border: 2px solid #5E5E5E;\n"
"border-radius: 11px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.5, cy: -0.5,\n"
"fx: 0.5, fy:-0.1,\n"
"radius: 1.3, stop: 0 rgba(198,198,198, 255), stop: 1 rgba(50, 50,50,50));\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background: qradialgradient(cx: 0.5, cy: -0.5,\n"
"fx: 0.5, fy: -0.1,\n"
"radius: 1.35, stop: 0 rgba(50, 50,50,50), stop: 1 rgba(198, 198,198, 255));\n"
"}"));
        Teclado_4 = new QPushButton(Teclado);
        Teclado_4->setObjectName(QString::fromUtf8("Teclado_4"));
        Teclado_4->setGeometry(QRect(10, 80, 60, 60));
        Teclado_4->setFont(font);
        Teclado_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: white;\n"
"border: 2px solid #5E5E5E;\n"
"border-radius: 11px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.5, cy: -0.5,\n"
"fx: 0.5, fy:-0.1,\n"
"radius: 1.3, stop: 0 rgba(198,198,198, 255), stop: 1 rgba(50, 50,50,50));\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background: qradialgradient(cx: 0.5, cy: -0.5,\n"
"fx: 0.5, fy: -0.1,\n"
"radius: 1.35, stop: 0 rgba(50, 50,50,50), stop: 1 rgba(198, 198,198, 255));\n"
"}"));
        Teclado_5 = new QPushButton(Teclado);
        Teclado_5->setObjectName(QString::fromUtf8("Teclado_5"));
        Teclado_5->setGeometry(QRect(80, 80, 60, 60));
        Teclado_5->setFont(font);
        Teclado_5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: white;\n"
"border: 2px solid #5E5E5E;\n"
"border-radius: 11px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.5, cy: -0.5,\n"
"fx: 0.5, fy:-0.1,\n"
"radius: 1.3, stop: 0 rgba(198,198,198, 255), stop: 1 rgba(50, 50,50,50));\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background: qradialgradient(cx: 0.5, cy: -0.5,\n"
"fx: 0.5, fy: -0.1,\n"
"radius: 1.35, stop: 0 rgba(50, 50,50,50), stop: 1 rgba(198, 198,198, 255));\n"
"}"));
        Teclado_6 = new QPushButton(Teclado);
        Teclado_6->setObjectName(QString::fromUtf8("Teclado_6"));
        Teclado_6->setGeometry(QRect(150, 80, 60, 60));
        Teclado_6->setFont(font);
        Teclado_6->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: white;\n"
"border: 2px solid #5E5E5E;\n"
"border-radius: 11px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.5, cy: -0.5,\n"
"fx: 0.5, fy:-0.1,\n"
"radius: 1.3, stop: 0 rgba(198,198,198, 255), stop: 1 rgba(50, 50,50,50));\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background: qradialgradient(cx: 0.5, cy: -0.5,\n"
"fx: 0.5, fy: -0.1,\n"
"radius: 1.35, stop: 0 rgba(50, 50,50,50), stop: 1 rgba(198, 198,198, 255));\n"
"}"));
        Teclado_1 = new QPushButton(Teclado);
        Teclado_1->setObjectName(QString::fromUtf8("Teclado_1"));
        Teclado_1->setGeometry(QRect(10, 150, 60, 60));
        Teclado_1->setFont(font);
        Teclado_1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: white;\n"
"border: 2px solid #5E5E5E;\n"
"border-radius: 11px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.5, cy: -0.5,\n"
"fx: 0.5, fy:-0.1,\n"
"radius: 1.3, stop: 0 rgba(198,198,198, 255), stop: 1 rgba(50, 50,50,50));\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background: qradialgradient(cx: 0.5, cy: -0.5,\n"
"fx: 0.5, fy: -0.1,\n"
"radius: 1.35, stop: 0 rgba(50, 50,50,50), stop: 1 rgba(198, 198,198, 255));\n"
"}"));
        Teclado_2 = new QPushButton(Teclado);
        Teclado_2->setObjectName(QString::fromUtf8("Teclado_2"));
        Teclado_2->setGeometry(QRect(80, 150, 60, 60));
        Teclado_2->setFont(font);
        Teclado_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: white;\n"
"border: 2px solid #5E5E5E;\n"
"border-radius: 11px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.5, cy: -0.5,\n"
"fx: 0.5, fy:-0.1,\n"
"radius: 1.3, stop: 0 rgba(198,198,198, 255), stop: 1 rgba(50, 50,50,50));\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background: qradialgradient(cx: 0.5, cy: -0.5,\n"
"fx: 0.5, fy: -0.1,\n"
"radius: 1.35, stop: 0 rgba(50, 50,50,50), stop: 1 rgba(198, 198,198, 255));\n"
"}"));
        Teclado_3 = new QPushButton(Teclado);
        Teclado_3->setObjectName(QString::fromUtf8("Teclado_3"));
        Teclado_3->setGeometry(QRect(150, 150, 60, 60));
        Teclado_3->setFont(font);
        Teclado_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: white;\n"
"border: 2px solid #5E5E5E;\n"
"border-radius: 11px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.5, cy: -0.5,\n"
"fx: 0.5, fy:-0.1,\n"
"radius: 1.3, stop: 0 rgba(198,198,198, 255), stop: 1 rgba(50, 50,50,50));\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background: qradialgradient(cx: 0.5, cy: -0.5,\n"
"fx: 0.5, fy: -0.1,\n"
"radius: 1.35, stop: 0 rgba(50, 50,50,50), stop: 1 rgba(198, 198,198, 255));\n"
"}"));
        Teclado_coma = new QPushButton(Teclado);
        Teclado_coma->setObjectName(QString::fromUtf8("Teclado_coma"));
        Teclado_coma->setGeometry(QRect(10, 220, 60, 60));
        Teclado_coma->setFont(font);
        Teclado_coma->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: white;\n"
"border: 2px solid #5E5E5E;\n"
"border-radius: 11px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.5, cy: -0.5,\n"
"fx: 0.5, fy:-0.1,\n"
"radius: 1.3, stop: 0 rgba(198,198,198, 255), stop: 1 rgba(50, 50,50,50));\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background: qradialgradient(cx: 0.5, cy: -0.5,\n"
"fx: 0.5, fy: -0.1,\n"
"radius: 1.35, stop: 0 rgba(50, 50,50,50), stop: 1 rgba(198, 198,198, 255));\n"
"}"));
        Teclado_0 = new QPushButton(Teclado);
        Teclado_0->setObjectName(QString::fromUtf8("Teclado_0"));
        Teclado_0->setGeometry(QRect(80, 220, 60, 60));
        Teclado_0->setFont(font);
        Teclado_0->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: white;\n"
"border: 2px solid #5E5E5E;\n"
"border-radius: 11px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.5, cy: -0.5,\n"
"fx: 0.5, fy:-0.1,\n"
"radius: 1.3, stop: 0 rgba(198,198,198, 255), stop: 1 rgba(50, 50,50,50));\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background: qradialgradient(cx: 0.5, cy: -0.5,\n"
"fx: 0.5, fy: -0.1,\n"
"radius: 1.35, stop: 0 rgba(50, 50,50,50), stop: 1 rgba(198, 198,198, 255));\n"
"}"));
        Teclado_cl = new QPushButton(Teclado);
        Teclado_cl->setObjectName(QString::fromUtf8("Teclado_cl"));
        Teclado_cl->setGeometry(QRect(150, 220, 60, 60));
        Teclado_cl->setFont(font);
        Teclado_cl->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: white;\n"
"border: 2px solid #5E5E5E;\n"
"border-radius: 11px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.5, cy: -0.5,\n"
"fx: 0.5, fy:-0.1,\n"
"radius: 1.3, stop: 0 rgba(198,198,198, 255), stop: 1 rgba(50, 50,50,50));\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background: qradialgradient(cx: 0.5, cy: -0.5,\n"
"fx: 0.5, fy: -0.1,\n"
"radius: 1.35, stop: 0 rgba(50, 50,50,50), stop: 1 rgba(198, 198,198, 255));\n"
"}"));
        Teclado_ok = new QPushButton(Teclado);
        Teclado_ok->setObjectName(QString::fromUtf8("Teclado_ok"));
        Teclado_ok->setGeometry(QRect(10, 290, 90, 60));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Verdana"));
        font1.setPointSize(17);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        Teclado_ok->setFont(font1);
        Teclado_ok->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: white;\n"
"border: 2px solid #5E5E5E;\n"
"border-radius: 11px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.5, cy: -0.5,\n"
"fx: 0.5, fy:-0.1,\n"
"radius: 1.3, stop: 0 rgba(198,198,198, 255), stop: 1 rgba(50, 50,50,50));\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background: qradialgradient(cx: 0.5, cy: -0.5,\n"
"fx: 0.5, fy: -0.1,\n"
"radius: 1.35, stop: 0 rgba(50, 50,50,50), stop: 1 rgba(198, 198,198, 255));\n"
"}"));
        Teclado_cancel = new QPushButton(Teclado);
        Teclado_cancel->setObjectName(QString::fromUtf8("Teclado_cancel"));
        Teclado_cancel->setGeometry(QRect(120, 290, 90, 60));
        Teclado_cancel->setFont(font1);
        Teclado_cancel->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: white;\n"
"border: 2px solid #5E5E5E;\n"
"border-radius: 11px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.5, cy: -0.5,\n"
"fx: 0.5, fy:-0.1,\n"
"radius: 1.3, stop: 0 rgba(198,198,198, 255), stop: 1 rgba(50, 50,50,50));\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background: qradialgradient(cx: 0.5, cy: -0.5,\n"
"fx: 0.5, fy: -0.1,\n"
"radius: 1.35, stop: 0 rgba(50, 50,50,50), stop: 1 rgba(198, 198,198, 255));\n"
"}"));
        Boton = new QPushButton(centralWidget);
        Boton->setObjectName(QString::fromUtf8("Boton"));
        Boton->setGeometry(QRect(200, 60, 75, 23));
        Teclado_numericoClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(Teclado_numericoClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Teclado_numericoClass->setStatusBar(statusBar);

        retranslateUi(Teclado_numericoClass);

        QMetaObject::connectSlotsByName(Teclado_numericoClass);
    } // setupUi

    void retranslateUi(QMainWindow *Teclado_numericoClass)
    {
        Teclado_numericoClass->setWindowTitle(QApplication::translate("Teclado_numericoClass", "Teclado_numerico", 0, QApplication::UnicodeUTF8));
        Teclado_7->setText(QApplication::translate("Teclado_numericoClass", "7", 0, QApplication::UnicodeUTF8));
        Teclado_8->setText(QApplication::translate("Teclado_numericoClass", "8", 0, QApplication::UnicodeUTF8));
        Teclado_9->setText(QApplication::translate("Teclado_numericoClass", "9", 0, QApplication::UnicodeUTF8));
        Teclado_4->setText(QApplication::translate("Teclado_numericoClass", "4", 0, QApplication::UnicodeUTF8));
        Teclado_5->setText(QApplication::translate("Teclado_numericoClass", "5", 0, QApplication::UnicodeUTF8));
        Teclado_6->setText(QApplication::translate("Teclado_numericoClass", "6", 0, QApplication::UnicodeUTF8));
        Teclado_1->setText(QApplication::translate("Teclado_numericoClass", "1", 0, QApplication::UnicodeUTF8));
        Teclado_2->setText(QApplication::translate("Teclado_numericoClass", "2", 0, QApplication::UnicodeUTF8));
        Teclado_3->setText(QApplication::translate("Teclado_numericoClass", "3", 0, QApplication::UnicodeUTF8));
        Teclado_coma->setText(QApplication::translate("Teclado_numericoClass", ",", 0, QApplication::UnicodeUTF8));
        Teclado_0->setText(QApplication::translate("Teclado_numericoClass", "0", 0, QApplication::UnicodeUTF8));
        Teclado_cl->setText(QApplication::translate("Teclado_numericoClass", "Cl", 0, QApplication::UnicodeUTF8));
        Teclado_ok->setText(QApplication::translate("Teclado_numericoClass", "Enter", 0, QApplication::UnicodeUTF8));
        Teclado_cancel->setText(QApplication::translate("Teclado_numericoClass", "Cancel", 0, QApplication::UnicodeUTF8));
        Boton->setText(QApplication::translate("Teclado_numericoClass", "PushButton", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Teclado_numericoClass: public Ui_Teclado_numericoClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TECLADO_NUMERICO_H
