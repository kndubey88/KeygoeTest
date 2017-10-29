#ifndef KEYGOE_AUTO_TEST_SUB_H
#define KEYGOE_AUTO_TEST_SUB_H

#include <QSettings>
#include <QString>
#include "C:/DJKeygoe/Samples/Analog_Common_Code/Analog_Common_Code.h"

//IP address
extern QString                  CfgIPAddress;
extern QString                  CfgIPPort;
extern QSettings *              CfgConfig;
extern CmdParamData_CAS_t       CmdParam;
extern TYPE_ANALOG_GTD_PARAM    g_Param_Analog;
extern ACSHandle_t              CfgAcsHandle;
extern ServerID_t               CfgServerID;

// functions
void           initSystem();
void           ReadFromeConfig();

#endif // KEYGOE_AUTO_TEST_SUB_H
