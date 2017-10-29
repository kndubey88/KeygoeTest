#include <QSettings>
#include <QString>
#include "C:/DJKeygoe/Inc/DJAcsAPIDef.h"
#include "C:/DJKeygoe/Samples/Analog_Common_Code/Analog_Common_Code.h"
#include "C:/DJKeygoe/Samples/CAS_Common_Code/CAS_Common_Cfg.H"

QString                 CfgIPAddress;
QString                 CfgIPPort;
QSettings *             CfgConfig;
CmdParamData_Conf_t     CmdParam;
TYPE_ANALOG_GTD_PARAM   g_Param_Analog;
ACSHandle_t             CfgAcsHandle;
ServerID_t              CfgServerID;
