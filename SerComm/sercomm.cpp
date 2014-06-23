#include "sercomm.h"
#include "ui_sercomm.h"
#include <QString>
#include <QMessageBox>

SerComm::SerComm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SerComm)
{
    ui->setupUi(this);
    Init();
}

SerComm::~SerComm()
{
    delete ui;
}

void SerComm::Init()
{
    //添加串口号
    ui->comboBox_PortName->addItem("/dev/ttySAC0");
    ui->comboBox_PortName->addItem("/dev/ttySAC1");
    ui->comboBox_PortName->addItem("/dev/ttySAC2");
    ui->comboBox_PortName->addItem("/dev/ttySAC3");
    ui->comboBox_PortName->addItem("/dev/ttySAC4");
    ui->comboBox_PortName->addItem("/dev/ttySAC5");
    ui->comboBox_PortName->addItem("/dev/ttySAC6");
    //添加波特率
    ui->comboBox_bandrate->addItem(QObject::tr("2400"));
    ui->comboBox_bandrate->addItem(QObject::tr("4800"));
    ui->comboBox_bandrate->addItem(QObject::tr("9600"));
    ui->comboBox_bandrate->addItem(QObject::tr("115200"));
    ui->comboBox_bandrate->setCurrentIndex(3);
    //
    BoolStatus=false;
}

void SerComm::on_pushButton_OpenClose_clicked()
{

    if(!BoolStatus)
    {
            QString portname=ui->comboBox_PortName->currentText();
            myCom = new Posix_QextSerialPort(portname,QextSerialBase::Polling);
            //定义串口对象，指定串口名和查询模式，这里使用Polling

            if(myCom ->open(QIODevice::ReadWrite))//以读写方式打开串口
            {
                BoolStatus=true;
                ui->pushButton_OpenClose->setText("Close");
                myCom->setBaudRate(BAUD115200);
                //波特率设置，我们设置为115200

                myCom->setDataBits(DATA_8);
                //数据位设置，我们设置为8位数据位

                myCom->setParity(PAR_NONE);
                //奇偶校验设置，我们设置为无校验

                myCom->setStopBits(STOP_1);
                //停止位设置，我们设置为1位停止位

                myCom->setFlowControl(FLOW_OFF);
                //数据流控制设置，我们设置为无数据流控制

                myCom->setTimeout(10);
                //延时设置，我们设置为延时10ms
                ReadTimer = new QTimer(this);
                ReadTimer->start(100);
                connect(ReadTimer,SIGNAL(timeout()),this,SLOT(readMyCom()));
                //connect(myCom,SIGNAL(readyRead()),this,SLOT(readMyCom()));
                //串口读数据槽
            }
            else
            {
                BoolStatus=false;
                QMessageBox::warning(this,tr("Warning"),tr("Open Error"),QMessageBox::Yes); // 给出 Warning
                return;
            }

    }
    else
    {
        myCom->close();
        BoolStatus=false;
        ReadTimer->stop();
        ui->pushButton_OpenClose->setText("Open");
    }

}

void SerComm::on_pushButton_RClear_clicked()
{
    ui->textEdit_Rec->clear();
}

void SerComm::on_pushButton_Send_clicked()
{

}

void SerComm::readMyCom()
{
    //ui->textEdit_Send->insertPlainText("1");
    if(myCom->bytesAvailable()>0)
    {
    QByteArray tmp=myCom->readAll();
    ui->textEdit_Rec->insertPlainText(tmp);
    }
}
