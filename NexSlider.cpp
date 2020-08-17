/**
 * @file NexSlider.cpp
 *
 * The implementation of class NexSlider. 
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
#include "NexSlider.h"

NexSlider::NexSlider(uint8_t pid, uint8_t cid, const char *name)
    :NexTouch(pid, cid, name)
{
}

bool NexSlider::getValue(uint32_t *number)
{
    char cmd[NEXTION_COMMAND_BUFFER] = "get ";
    strcat(cmd, getObjName());
    strcat(cmd, ".val");
    sendCommand(cmd);
    return recvRetNumber(number);
}

bool NexSlider::setValue(uint32_t number)
{
    char cmd[NEXTION_COMMAND_BUFFER];
    sprintf(cmd, "%s.val=%u", getObjName(), number);
    sendCommand(cmd);
    return recvRetCommandFinished();
}

bool NexSlider::getBackgroundColorBco(uint32_t *number)
{
    char cmd[NEXTION_COMMAND_BUFFER];
    sprintf(cmd, "get %s.bco", getObjName());
    sendCommand(cmd);
    return recvRetNumber(number);
}

bool NexSlider::setBackgroundColorBco(uint32_t number)
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

bool NexSlider::getFontColorPco(uint32_t *number)
{
    char cmd[NEXTION_COMMAND_BUFFER] = "get ";
    strcat(cmd, getObjName());
    strcat(cmd, ".pco");
    sendCommand(cmd);
    return recvRetNumber(number);
}

bool NexSlider::setFontColorPco(uint32_t number)
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

bool NexSlider::getPointerThicknessWid(uint32_t *number)
{
    char cmd[NEXTION_COMMAND_BUFFER] = "get ";
    strcat(cmd, getObjName());
    strcat(cmd, ".wid");
    sendCommand(cmd);
    return recvRetNumber(number);
}

bool NexSlider::setPointerThicknessWid(uint32_t number)
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

bool NexSlider::getCursorHeightHig(uint32_t *number)
{
    char cmd[NEXTION_COMMAND_BUFFER] = "get ";
    strcat(cmd, getObjName());
    strcat(cmd, ".hig");
    sendCommand(cmd);
    return recvRetNumber(number);
}

bool NexSlider::setCursorHeightHig(uint32_t number)
{
    char cmd[NEXTION_COMMAND_BUFFER];
    sprintf(cmd, "%s.hig=%u", getObjName(), number);
    sendCommand(cmd);
	
    memset(cmd, 0, NEXTION_COMMAND_BUFFER);
    strcat(cmd, "ref ");
    strcat(cmd, getObjName());
    sendCommand(cmd);
    return recvRetCommandFinished();
}

bool NexSlider::getMaxval(uint32_t *number)
{
    char cmd[NEXTION_COMMAND_BUFFER] = "get ";
    strcat(cmd, getObjName());
    strcat(cmd, ".maxval");
    sendCommand(cmd);
    return recvRetNumber(number);
}

bool NexSlider::setMaxval(uint32_t number)
{
    char cmd[NEXTION_COMMAND_BUFFER];
    sprintf(cmd, "%s.maxval=%u", getObjName(), number);
    sendCommand(cmd);
	
    memset(cmd, 0, NEXTION_COMMAND_BUFFER);
    strcat(cmd, "ref ");
    strcat(cmd, getObjName());
    sendCommand(cmd);
    return recvRetCommandFinished();
}

bool NexSlider::getMinval(uint32_t *number)
{
    char cmd[NEXTION_COMMAND_BUFFER] = "get ";
    strcat(cmd, getObjName());
    strcat(cmd, ".minval");
    sendCommand(cmd);
    return recvRetNumber(number);
}

bool NexSlider::setMinval(uint32_t number)
{
    char cmd[NEXTION_COMMAND_BUFFER];
    sprintf(cmd, "%s.minval=%u", getObjName(), number);
    sendCommand(cmd);
	
    memset(cmd, 0, NEXTION_COMMAND_BUFFER);
    strcat(cmd, "ref ");
    strcat(cmd, getObjName());
    sendCommand(cmd);
    return recvRetCommandFinished();
}