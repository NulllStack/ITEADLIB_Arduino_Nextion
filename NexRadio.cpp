/**
 * @file NexRadio.cpp
 *
 * The implementation of class NexRadio. 
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
#include "NexRadio.h"

NexRadio::NexRadio(uint8_t pid, uint8_t cid, const char *name)
    :NexTouch(pid, cid, name)
{
}

bool NexRadio::getValue(uint32_t *number)
{
    char cmd[NEXTION_COMMAND_BUFFER];
    sprintf(cmd, "get %s.val", getObjName());
    sendCommand(cmd);
    return recvRetNumber(number);
}

bool NexRadio::setValue(uint32_t number)
{
    char cmd[NEXTION_COMMAND_BUFFER];
    sprintf(cmd, "%s.val=%u", getObjName(), number);
    sendCommand(cmd);
    return recvRetCommandFinished();
}

bool NexRadio::getBackgroundColorBco(uint32_t *number)
{
    char cmd[NEXTION_COMMAND_BUFFER];
    sprintf(cmd, "get %s.bco", getObjName());
    sendCommand(cmd);
    return recvRetNumber(number);
}

bool NexRadio::setBackgroundColorBco(uint32_t number)
{
    char cmd[NEXTION_COMMAND_BUFFER];
    sprintf(cmd, "%s.bco=%u", getObjName(), number);
    sendCommand(cmd);
	
    memset(cmd, 0, NEXTION_COMMAND_BUFFER);
    strcat(cmd, "ref ");
    strcat(cmd, getObjName());
    sendCommand(cmd);
    return recvRetCommandFinished();
}

bool NexRadio::getFontColorPco(uint32_t *number)
{
    char cmd[NEXTION_COMMAND_BUFFER] = "get ";
    strcat(cmd, getObjName());
    strcat(cmd, ".pco");
    sendCommand(cmd);
    return recvRetNumber(number);
}

bool NexRadio::setFontColorPco(uint32_t number)
{
    char cmd[NEXTION_COMMAND_BUFFER];
    sprintf(cmd, "%s.pco=%u", getObjName(), number);
    sendCommand(cmd);
	
    memset(cmd, 0, NEXTION_COMMAND_BUFFER);
    strcat(cmd, "ref ");
    strcat(cmd, getObjName());
    sendCommand(cmd);
    return recvRetCommandFinished();
}