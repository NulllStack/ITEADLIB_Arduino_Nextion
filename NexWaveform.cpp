/**
 * @file NexWaveform.cpp
 *
 * The implementation of class NexWaveform. 
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
#include "NexWaveform.h"

NexWaveform::NexWaveform(uint8_t pid, uint8_t cid, const char *name)
    :NexObject(pid, cid, name)
{
}

bool NexWaveform::addValue(uint8_t ch, uint8_t number)
{
    char cmd[NEXTION_COMMAND_BUFFER] = {0};
    
    if (ch > 3)
    {
        return false;
    }
    
    sprintf(cmd, "add %u,%u,%u", getObjCid(), ch, number);

    sendCommand(cmd);
    return recvRetCommandFinished();
}

bool NexWaveform::getBackgroundColorBco(uint32_t *number)
{
    char cmd[NEXTION_COMMAND_BUFFER];
    sprintf(cmd, "get %s.bco", getObjName());
    sendCommand(cmd);
    return recvRetNumber(number);
}

bool NexWaveform::setBackgroundColorBco(uint32_t number)
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

bool NexWaveform::getGridColorGdc(uint32_t *number)
{
    char cmd[NEXTION_COMMAND_BUFFER];
    sprintf(cmd, "get %s.gdc", getObjName());
    sendCommand(cmd);
    return recvRetNumber(number);
}

bool NexWaveform::setGridColorGdc(uint32_t number)
{
    char cmd[NEXTION_COMMAND_BUFFER];
    sprintf(cmd, "%s.gdc=%u", getObjName(), number);
    sendCommand(cmd);
	
    memset(cmd, 0, NEXTION_COMMAND_BUFFER);
    strcat(cmd, "ref ");
    strcat(cmd, getObjName());
    sendCommand(cmd);
    return recvRetCommandFinished();
}

bool NexWaveform::getGridWidthGdw(uint32_t *number)
{
    char cmd[NEXTION_COMMAND_BUFFER];
    sprintf(cmd, "get %s.gdw", getObjName());
    sendCommand(cmd);
    return recvRetNumber(number);
}

bool NexWaveform::setGridWidthGdw(uint32_t number)
{
    char cmd[NEXTION_COMMAND_BUFFER];
    sprintf(cmd, "%s.gdw=%u", getObjName(), number);
    sendCommand(cmd);
	
    memset(cmd, 0, NEXTION_COMMAND_BUFFER);
    strcat(cmd, "ref ");
    strcat(cmd, getObjName());
    sendCommand(cmd);
    return recvRetCommandFinished();
}

bool NexWaveform::getGridHeightGdh(uint32_t *number)
{
    char cmd[NEXTION_COMMAND_BUFFER];
    sprintf(cmd, "get %s.gdh", getObjName());
    sendCommand(cmd);
    return recvRetNumber(number);
}

bool NexWaveform::setGridHeightGdh(uint32_t number)
{
    char cmd[NEXTION_COMMAND_BUFFER];
    sprintf(cmd, "%s.gdh=%u", getObjName(), number);
    sendCommand(cmd);
	
    memset(cmd, 0, NEXTION_COMMAND_BUFFER);
    strcat(cmd, "ref ");
    strcat(cmd, getObjName());
    sendCommand(cmd);
    return recvRetCommandFinished();
}

bool NexWaveform::getChannelColorPco(uint32_t *number, uint8_t channel)
{
    char cmd[NEXTION_COMMAND_BUFFER];
    sprintf(cmd, "get %s.pco%d", getObjName(), channel);
    sendCommand(cmd);
    return recvRetNumber(number);
}

bool NexWaveform::setChannelColorPco(uint32_t number, uint8_t channel)
{    
    char cmd[NEXTION_COMMAND_BUFFER];
    sprintf(cmd, "%s.pco%d=%d", getObjName(), channel, number);    
    sendCommand(cmd);
    recvRetCommandFinished();
	
    memset(cmd, 0, NEXTION_COMMAND_BUFFER);
    sprintf(cmd, "ref %s", getObjName());
    sendCommand(cmd);
    return recvRetCommandFinished();
}
 
