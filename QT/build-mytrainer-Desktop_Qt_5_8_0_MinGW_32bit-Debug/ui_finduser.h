/********************************************************************************
** Form generated from reading UI file 'finduser.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINDUSER_H
#define UI_FINDUSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_finduser
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QLabel *label;
    QPushButton *pushButton_2;
    QListWidget *listWidget;
    QLineEdit *lineEdit;
    QLabel *label_7;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *finduser)
    {
        if (finduser->objectName().isEmpty())
            finduser->setObjectName(QStringLiteral("finduser"));
        finduser->resize(800, 600);
        centralwidget = new QWidget(finduser);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(90, 160, 93, 28));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(41, 80, 81, 31));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(90, 220, 93, 28));
        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(310, 10, 481, 571));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(140, 80, 121, 31));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(70, 10, 151, 41));
        finduser->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(finduser);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        finduser->setStatusBar(statusbar);

        retranslateUi(finduser);

        QMetaObject::connectSlotsByName(finduser);
    } // setupUi

    void retranslateUi(QMainWindow *finduser)
    {
        finduser->setWindowTitle(QApplication::translate("finduser", "MainWindow", Q_NULLPTR));
        pushButton->setText(QApplication::translate("finduser", "\346\237\245\350\257\242", Q_NULLPTR));
        label->setText(QApplication::translate("finduser", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600;\">\347\224\250\346\210\267ID:</span></p></body></html>", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("finduser", "\350\277\224\345\233\236", Q_NULLPTR));
        label_7->setText(QApplication::translate("finduser", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600;\">\346\237\245\350\257\242\347\224\250\346\210\267\344\277\241\346\201\257</span></p><p><span style=\" font-size:14pt; font-weight:600;\"><br/></span></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class finduser: public Ui_finduser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINDUSER_H
