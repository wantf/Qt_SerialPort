#ifndef SERCOMM_H
#define SERCOMM_H

#include <QDialog>
#include <QTimer>
#include "posix_qextserialport.h"
namespace Ui {
class SerComm;
}

class SerComm : public QDialog
{
    Q_OBJECT
    
public:
    explicit SerComm(QWidget *parent = 0);
    ~SerComm();
public:
    void Init();

private slots:
    void on_pushButton_OpenClose_clicked();

    void on_pushButton_RClear_clicked();

    void on_pushButton_Send_clicked();

    void readMyCom();

private:
    Ui::SerComm *ui;
    bool BoolStatus;
    Posix_QextSerialPort *myCom;
    QTimer *ReadTimer;
};

#endif // SERCOMM_H
