/********************************************************************************
** Form generated from reading UI file 'sercomm.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERCOMM_H
#define UI_SERCOMM_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_SerComm
{
public:
    QTextEdit *textEdit_Rec;
    QTextEdit *textEdit_Send;
    QGroupBox *groupBox;
    QLabel *label;
    QComboBox *comboBox_PortName;
    QLabel *label_2;
    QPushButton *pushButton_OpenClose;
    QComboBox *comboBox_bandrate;
    QPushButton *pushButton_Send;
    QLabel *label_Rec;
    QLabel *label_Send;
    QPushButton *pushButton_RClear;

    void setupUi(QDialog *SerComm)
    {
        if (SerComm->objectName().isEmpty())
            SerComm->setObjectName(QString::fromUtf8("SerComm"));
        SerComm->setEnabled(true);
        SerComm->resize(480, 272);
        SerComm->setMaximumSize(QSize(480, 272));
        textEdit_Rec = new QTextEdit(SerComm);
        textEdit_Rec->setObjectName(QString::fromUtf8("textEdit_Rec"));
        textEdit_Rec->setGeometry(QRect(190, 40, 281, 101));
        textEdit_Send = new QTextEdit(SerComm);
        textEdit_Send->setObjectName(QString::fromUtf8("textEdit_Send"));
        textEdit_Send->setGeometry(QRect(190, 160, 281, 81));
        groupBox = new QGroupBox(SerComm);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 171, 161));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 40, 66, 17));
        comboBox_PortName = new QComboBox(groupBox);
        comboBox_PortName->setObjectName(QString::fromUtf8("comboBox_PortName"));
        comboBox_PortName->setGeometry(QRect(60, 30, 101, 27));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 90, 66, 17));
        pushButton_OpenClose = new QPushButton(groupBox);
        pushButton_OpenClose->setObjectName(QString::fromUtf8("pushButton_OpenClose"));
        pushButton_OpenClose->setGeometry(QRect(60, 130, 98, 27));
        comboBox_bandrate = new QComboBox(groupBox);
        comboBox_bandrate->setObjectName(QString::fromUtf8("comboBox_bandrate"));
        comboBox_bandrate->setGeometry(QRect(60, 80, 101, 27));
        pushButton_Send = new QPushButton(SerComm);
        pushButton_Send->setObjectName(QString::fromUtf8("pushButton_Send"));
        pushButton_Send->setGeometry(QRect(70, 210, 98, 27));
        label_Rec = new QLabel(SerComm);
        label_Rec->setObjectName(QString::fromUtf8("label_Rec"));
        label_Rec->setGeometry(QRect(190, 250, 66, 17));
        label_Send = new QLabel(SerComm);
        label_Send->setObjectName(QString::fromUtf8("label_Send"));
        label_Send->setGeometry(QRect(360, 250, 66, 17));
        pushButton_RClear = new QPushButton(SerComm);
        pushButton_RClear->setObjectName(QString::fromUtf8("pushButton_RClear"));
        pushButton_RClear->setGeometry(QRect(370, 10, 98, 27));

        retranslateUi(SerComm);

        QMetaObject::connectSlotsByName(SerComm);
    } // setupUi

    void retranslateUi(QDialog *SerComm)
    {
        SerComm->setWindowTitle(QApplication::translate("SerComm", "SerComm", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("SerComm", "\344\270\262\345\217\243\345\217\202\346\225\260", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("SerComm", "\344\270\262\345\217\243\345\217\267\357\274\232", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("SerComm", "\346\263\242\347\211\271\347\216\207\357\274\232", 0, QApplication::UnicodeUTF8));
        pushButton_OpenClose->setText(QApplication::translate("SerComm", "\345\274\200\345\220\257", 0, QApplication::UnicodeUTF8));
        pushButton_Send->setText(QApplication::translate("SerComm", "\345\217\221\351\200\201", 0, QApplication::UnicodeUTF8));
        label_Rec->setText(QApplication::translate("SerComm", "\346\216\245\345\217\227\357\274\232", 0, QApplication::UnicodeUTF8));
        label_Send->setText(QApplication::translate("SerComm", "\345\217\221\351\200\201\357\274\232", 0, QApplication::UnicodeUTF8));
        pushButton_RClear->setText(QApplication::translate("SerComm", "\346\270\205\347\251\272", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SerComm: public Ui_SerComm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERCOMM_H
