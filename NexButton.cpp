/**
 * @file NexButton.cpp
 *
 * The implementation of class NexButton. 
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

#include "NexButton.h"

NexButton::NexButton(uint8_t pid, uint8_t cid, const char *name)
    :NexTouch(pid, cid, name)
{
}

uint16_t NexButton::getText(char *buffer, uint16_t len)
{
    char cmd[NEXTION_COMMAND_BUFFER];
    sprintf(cmd, "get %s.txt", getObjName());
    sendCommand(cmd);
    return recvRetString(buffer,len);
}

bool NexButton::setText(const char *buffer)
{
    String cmd;
    cmd += getObjName();
    cmd += ".txt=\"";
    cmd += buffer;
    cmd += "\"";
    sendCommand(cmd.c_str());
    return recvRetCommandFinished();    
}


bool NexButton::getBackgroundColorBco(uint32_t *number)
{
    char cmd[NEXTION_COMMAND_BUFFER];
    sprintf(cmd, "get %s.bco", getObjName());
    sendCommand(cmd);
    return recvRetNumber(number);
}

bool NexButton::setBackgroundColorBco(uint32_t number)
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

bool NexButton::getPressBackgroundColorBco2(uint32_t *number)
{
    char cmd[NEXTION_COMMAND_BUFFER] = "get ";
    strcat(cmd, getObjName());
    strcat(cmd, ".bco2");
    sendCommand(cmd);
    return recvRetNumber(number);
}

bool NexButton::setPressBackgroundColorBco2(uint32_t number)
{
    char cmd[NEXTION_COMMAND_BUFFER];
    sprintf(cmd, "%s.bco2=%u", getObjName(), number);
    sendCommand(cmd);
	
    memset(cmd, 0, NEXTION_COMMAND_BUFFER);
    strcat(cmd, "ref ");
    strcat(cmd, getObjName());
    sendCommand(cmd);
    return recvRetCommandFinished();
}

bool NexButton::getFontColorPco(uint32_t *number)
{
    char cmd[NEXTION_COMMAND_BUFFER] = "get ";
    strcat(cmd, getObjName());
    strcat(cmd, ".pco");
    sendCommand(cmd);
    return recvRetNumber(number);
}

bool NexButton::setFontColorPco(uint32_t number)
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

bool NexButton::getPressFontColorPco2(uint32_t *number)
{
    char cmd[NEXTION_COMMAND_BUFFER] = "get ";
    strcat(cmd, getObjName());
    strcat(cmd, ".pco2");
    sendCommand(cmd);
    return recvRetNumber(number);
}

bool NexButton::setPressFontColorPco2(uint32_t number)
{
    char cmd[NEXTION_COMMAND_BUFFER];
    sprintf(cmd, "%s.pco2=%u", getObjName(), number);
    sendCommand(cmd);
	
    memset(cmd, 0, NEXTION_COMMAND_BUFFER);
    strcat(cmd, "ref ");
    strcat(cmd, getObjName());
    sendCommand(cmd);
    return recvRetCommandFinished();
}

bool NexButton::getPlaceXcen(uint32_t *number)
{
    char cmd[NEXTION_COMMAND_BUFFER] = "get ";
    strcat(cmd, getObjName());
    strcat(cmd, ".xcen");
    sendCommand(cmd);
    return recvRetNumber(number);
}

bool NexButton::setPlaceXcen(uint32_t number)
{
    char cmd[NEXTION_COMMAND_BUFFER];
    sprintf(cmd, "%s.xcen=%u", getObjName(), number);
    sendCommand(cmd);
	
    memset(cmd, 0, NEXTION_COMMAND_BUFFER);
    strcat(cmd, "ref ");
    strcat(cmd, getObjName());
    sendCommand(cmd);
    return recvRetCommandFinished();
}

bool NexButton::getPlaceYcen(uint32_t *number)
{
    char cmd[NEXTION_COMMAND_BUFFER] = "get ";
    strcat(cmd, getObjName());
    strcat(cmd, ".ycen");
    sendCommand(cmd);
    return recvRetNumber(number);
}

bool NexButton::setPlaceYcen(uint32_t number)
{
    char cmd[NEXTION_COMMAND_BUFFER];
    sprintf(cmd, "%s.ycen=%u", getObjName(), number);
    sendCommand(cmd);
	
    memset(cmd, 0, NEXTION_COMMAND_BUFFER);
    strcat(cmd, "ref ");
    strcat(cmd, getObjName());
    sendCommand(cmd);
    return recvRetCommandFinished();
}

bool NexButton::getFont(uint32_t *number)
{
    char cmd[NEXTION_COMMAND_BUFFER] = "get ";
    strcat(cmd, getObjName());
    strcat(cmd, ".font");
    sendCommand(cmd);
    return recvRetNumber(number);
}

bool NexButton::setFont(uint32_t number)
{
    char cmd[NEXTION_COMMAND_BUFFER];
    sprintf(cmd, "%s.font=%u", getObjName(), number);
    sendCommand(cmd);
	
    memset(cmd, 0, NEXTION_COMMAND_BUFFER);
    strcat(cmd, "ref ");
    strcat(cmd, getObjName());
    sendCommand(cmd);
    return recvRetCommandFinished();
}

bool NexButton::getBackgroundCropPicc(uint32_t *number)
{
    char cmd[NEXTION_COMMAND_BUFFER] = "get ";
    strcat(cmd, getObjName());
    strcat(cmd, ".picc");
    sendCommand(cmd);
    return recvRetNumber(number);
}

bool NexButton::setBackgroundCropPicc(uint32_t number)
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

bool NexButton::getPressBackgroundCropPicc2(uint32_t *number)
{
    char cmd[NEXTION_COMMAND_BUFFER] = "get ";
    strcat(cmd, getObjName());
    strcat(cmd, ".picc2");
    sendCommand(cmd);
    return recvRetNumber(number);
}

bool NexButton::setPressBackgroundCropPicc2(uint32_t number)
{
    char cmd[NEXTION_COMMAND_BUFFER];
    sprintf(cmd, "%s.picc2=%u", getObjName(), number);
    sendCommand(cmd);
	
    memset(cmd, 0, NEXTION_COMMAND_BUFFER);
    strcat(cmd, "ref ");
    strcat(cmd, getObjName());
    sendCommand(cmd);
    return recvRetCommandFinished();
}

bool NexButton::getBackgroundImagePic(uint32_t *number)
{
    char cmd[NEXTION_COMMAND_BUFFER] = "get ";
    strcat(cmd, getObjName());
    strcat(cmd, ".pic");
    sendCommand(cmd);
    return recvRetNumber(number);
}

bool NexButton::setBackgroundImagePic(uint32_t number)
{
    char cmd[NEXTION_COMMAND_BUFFER];
    sprintf(cmd, "%s.pic=%u", getObjName(), number);
    sendCommand(cmd);
	
    memset(cmd, 0, NEXTION_COMMAND_BUFFER);
    strcat(cmd, "ref ");
    strcat(cmd, getObjName());
    sendCommand(cmd);
    return recvRetCommandFinished();
}

bool NexButton::getPressBackgroundImagePic2(uint32_t *number)
{
    char cmd[NEXTION_COMMAND_BUFFER] = "get ";
    strcat(cmd, getObjName());
    strcat(cmd, ".pic2");
    sendCommand(cmd);
    return recvRetNumber(number);
}

bool NexButton::setPressBackgroundImagePic2(uint32_t number)
{
    char cmd[NEXTION_COMMAND_BUFFER];
    sprintf(cmd, "%s.pic2=%u", getObjName(), number);
    sendCommand(cmd);
	
    memset(cmd, 0, NEXTION_COMMAND_BUFFER);
    strcat(cmd, "ref ");
    strcat(cmd, getObjName());
    sendCommand(cmd);
    return recvRetCommandFinished();
}
