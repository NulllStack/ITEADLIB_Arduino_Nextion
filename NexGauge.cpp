/**
 * @file NexGauge.cpp
 *
 * The implementation of class NexGauge. 
 *
 * @author  Wu Pengfei (email:<pengfei.wu@itead.cc>)
 * @date    2015/8/13
 * @copyright 
 * Copyright (C) 2014-2015 ITEAD Intelligent Systems Co., Ltd. \n
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of
 * the License, or (at your option) any later version.
 */

#include "NexGauge.h"

NexGauge::NexGauge(uint8_t pid, uint8_t cid, const char *name)
    :NexObject(pid, cid, name)
{
}

bool NexGauge::getValue(uint32_t *number)
{
    char cmd[NEXTION_COMMAND_BUFFER];
    sprintf(cmd, "get %s.val", getObjName());
    sendCommand(cmd);
    return recvRetNumber(number);
}

bool NexGauge::setValue(uint32_t number)
{
    char cmd[NEXTION_COMMAND_BUFFER];
    sprintf(cmd, "%s.val=%u", getObjName(), number);
    sendCommand(cmd);
    return recvRetCommandFinished();
}

bool NexGauge::getBackgroundColorBco(uint32_t *number)
{
    char cmd[NEXTION_COMMAND_BUFFER];
    sprintf(cmd, "get %s.bco", getObjName());
    sendCommand(cmd);
    return recvRetNumber(number);
}

bool NexGauge::setBackgroundColorBco(uint32_t number)
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

bool NexGauge::getPointerColorPco(uint32_t *number)
{
    char cmd[NEXTION_COMMAND_BUFFER] = "get ";
    strcat(cmd, getObjName());
    strcat(cmd, ".pco");
    sendCommand(cmd);
    return recvRetNumber(number);
}

bool NexGauge::setPointerColorPco(uint32_t number)
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

bool NexGauge::getPointerThicknessWid(uint32_t *number)
{
    char cmd[NEXTION_COMMAND_BUFFER] = "get ";
    strcat(cmd, getObjName());
    strcat(cmd, ".wid");
    sendCommand(cmd);
    return recvRetNumber(number);
}

bool NexGauge::setPointerThicknessWid(uint32_t number)
{
    char cmd[NEXTION_COMMAND_BUFFER];
    sprintf(cmd, "%s.wid=%u", getObjName(), number);
    sendCommand(cmd);
	
    memset(cmd, 0, NEXTION_COMMAND_BUFFER);
    strcat(cmd, "ref ");
    strcat(cmd, getObjName());
    sendCommand(cmd);
    return recvRetCommandFinished();
}

bool NexGauge::getBackgroundCropPicc(uint32_t *number)
{
    char cmd[NEXTION_COMMAND_BUFFER] = "get ";
    strcat(cmd, getObjName());
    strcat(cmd, ".picc");
    sendCommand(cmd);
    return recvRetNumber(number);
}

bool NexGauge::setBackgroundCropPicc(uint32_t number)
{
    char cmd[NEXTION_COMMAND_BUFFER];
    sprintf(cmd, "%s.picc=%u", getObjName(), number);
    sendCommand(cmd);
	
    memset(cmd, 0, NEXTION_COMMAND_BUFFER);
    strcat(cmd, "ref ");
    strcat(cmd, getObjName());
    sendCommand(cmd);
    return recvRetCommandFinished();
}

 
