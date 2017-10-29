#include "C:/DJKeygoe/Inc/DJAcsAPIDef.h"
#include "keygoe_auto_test_sub.h"
#include <QtWidgets>
#include <QDebug>

#include "C:/DJKeygoe/Samples/Analog_Common_Code/Analog_Common_Code.h"
#include "C:/DJKeygoe/Samples/CAS_Common_Code/CAS_Common_Cfg.H"


void ReadFromeConfig()
{
    CfgAcsHandle = -1;
    CfgConfig                   = new QSettings("cfg_file.ini",QSettings::IniFormat);
    QByteArray TempServerIP     = CfgConfig->value("ip/ip-addr").toString().toLatin1();
    strcpy(CfgServerID.m_s8ServerIp,TempServerIP.data());
    CfgServerID.m_u32ServerPort = CfgConfig->value("ip/ip-port").toInt();

    delete CfgConfig;
}

void initSystem()
{

    ReadFromeConfig();

    RetCode_t ResultValue;

    ResultValue = CAS_Common_Cfg_ReadCfg(&CmdParam);
    if(ResultValue != 0)
    {
        QMessageBox InitFailMsgBox;
        InitFailMsgBox.setText("Init Fial!");
        InitFailMsgBox.exec();
    }

    ResultValue = Analog_Common_Cfg_ReadCfg(&g_Param_Analog);
    if(ResultValue != 0)
    {
        QMessageBox InitFailMsgBox;
        InitFailMsgBox.setText("Init Fial!");
        InitFailMsgBox.exec();
    }

    ResultValue = XMS_acsOpenStream(&CfgAcsHandle,&CfgServerID,1,32,32,1,NULL);

    if(ResultValue < 0)
    {
        QMessageBox InitFailMsgBox;
        InitFailMsgBox.setText("OpenStream Fial!");
        InitFailMsgBox.exec();
    }

}




