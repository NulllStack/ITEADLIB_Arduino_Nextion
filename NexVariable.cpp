/**
 * @file NexVariable.cpp
 *
 * The implementation of class NexText. 
 *
 * @author  huang xiaoming (email:<xiaoming.huang@itead.cc>)
 * @date    2016/9/13
 * @copyright 
 * Copyright (C) 2014-2015 ITEAD Intelligent Systems Co., Ltd. \n
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of
 * the License, or (at your option) any later version.
 */
#include "NexVariable.h"

NexVariable::NexVariable(uint8_t pid, uint8_t cid, const char *name)
    :NexTouch(pid, cid, name)
{
}

bool NexVariable::getValue(int32_t *number)
{
    char cmd[NEXTION_COMMAND_BUFFER];
    sprintf(cmd, "get %s.val", getObjName());
    sendCommand(cmd);
    return recvRetNumber(number);
}

bool NexVariable::setValue(int32_t number)
{
    char cmd[NEXTION_COMMAND_BUFFER];
    sprintf(cmd, "%s.val=%d", getObjName(), number);
    sendCommand(cmd);
    return recvRetCommandFinished();
}
