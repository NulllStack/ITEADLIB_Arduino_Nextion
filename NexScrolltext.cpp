/**
 * @file NexScrolltext.cpp
 *
 * The implementation of class NexScrolltext. 
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
#include "NexScrolltext.h"

NexScrolltext::NexScrolltext(uint8_t pid, uint8_t cid, const char *name)
    :NexTouch(pid, cid, name)
{
}

uint16_t NexScrolltext::getText(char *buffer, uint16_t len)
{
    String cmd;
    cmd += "get ";
    cmd += getObjName();
    cmd += ".txt";
    sendCommand(cmd.c_str());
    return recvRetString(buffer,len);
}

bool NexScrolltext::setText(const char *buffer)
{
    String cmd;
    cmd += getObjName();
    cmd += ".txt=\"";
    cmd += buffer;
    cmd += "\"";
    sendCommand(cmd.c_str());
    return recvRetCommandFinished();    
}

bool NexScrolltext::getBackgroundColorBco(uint32_t *number)
{
    char cmd[NEXTION_COMMAND_BUFFER];
    sprintf(cmd, "get %s.bco", getObjName());
    sendCommand(cmd);
    return recvRetNumber(number);
}

bool NexScrolltext::setBackgroundColorBco(uint32_t number)
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

bool NexScrolltext::getFontColorPco(uint32_t *number)
{
    char cmd[NEXTION_COMMAND_BUFFER] = "get ";
    strcat(cmd, getObjName());
    strcat(cmd, ".pco");
    sendCommand(cmd);
    return recvRetNumber(number);
}

bool NexScrolltext::setFontColorPco(uint32_t number)
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

bool NexScrolltext::getPlaceXcen(uint32_t *number)
{
    char cmd[NEXTION_COMMAND_BUFFER] = "get ";
    strcat(cmd, getObjName());
    strcat(cmd, ".xcen");
    sendCommand(cmd);
    return recvRetNumber(number);
}

bool NexScrolltext::setPlaceXcen(uint32_t number)
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

bool NexScrolltext::getPlaceYcen(uint32_t *number)
{
    char cmd[NEXTION_COMMAND_BUFFER] = "get ";
    strcat(cmd, getObjName());
    strcat(cmd, ".ycen");
    sendCommand(cmd);
    return recvRetNumber(number);
}

bool NexScrolltext::setPlaceYcen(uint32_t number)
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

bool NexScrolltext::getFont(uint32_t *number)
{
    char cmd[NEXTION_COMMAND_BUFFER] = "get ";
    strcat(cmd, getObjName());
    strcat(cmd, ".font");
    sendCommand(cmd);
    return recvRetNumber(number);
}

bool NexScrolltext::setFont(uint32_t number)
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

bool NexScrolltext::getBackgroundCropPicc(uint32_t *number)
{
    char cmd[NEXTION_COMMAND_BUFFER] = "get ";
    strcat(cmd, getObjName());
    strcat(cmd, ".picc");
    sendCommand(cmd);
    return recvRetNumber(number);
}

bool NexScrolltext::setBackgroundCropPicc(uint32_t number)
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

bool NexScrolltext::getBackgroundImagePic(uint32_t *number)
{
    char cmd[NEXTION_COMMAND_BUFFER] = "get ";
    strcat(cmd, getObjName());
    strcat(cmd, ".pic");
    sendCommand(cmd);
    return recvRetNumber(number);
}

bool NexScrolltext::setBackgroundImagePic(uint32_t number)
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

bool NexScrolltext::getScrollDir(uint32_t *number)
{
    char cmd[NEXTION_COMMAND_BUFFER] = "get ";
    strcat(cmd, getObjName());
    strcat(cmd, ".dir");
    sendCommand(cmd);
    return recvRetNumber(number);
}

bool NexScrolltext::setScrollDir(uint32_t number)
{
    char cmd[NEXTION_COMMAND_BUFFER];
    sprintf(cmd, "%s.dir=%u", getObjName(), number);
    sendCommand(cmd);
	
    memset(cmd, 0, NEXTION_COMMAND_BUFFER);
    strcat(cmd, "ref ");
    strcat(cmd, getObjName());
    sendCommand(cmd);
    return recvRetCommandFinished();
}

bool NexScrolltext::getScrollDistance(uint32_t *number)
{
    char cmd[NEXTION_COMMAND_BUFFER] = "get ";
    strcat(cmd, getObjName());
    strcat(cmd, ".dis");
    sendCommand(cmd);
    return recvRetNumber(number);
}

bool NexScrolltext::setScrollDistance(uint32_t number)
{
    if (number < 2)
    {
        number = 2;
    }

    char cmd[NEXTION_COMMAND_BUFFER];
    sprintf(cmd, "%s.dis=%u", getObjName(), number);
    sendCommand(cmd);
	
    memset(cmd, 0, NEXTION_COMMAND_BUFFER);
    strcat(cmd, "ref ");
    strcat(cmd, getObjName());
    sendCommand(cmd);
    return recvRetCommandFinished();
}

bool NexScrolltext::getCycleTim(uint32_t *number)
{
    char cmd[NEXTION_COMMAND_BUFFER] = "get ";
    strcat(cmd, getObjName());
    strcat(cmd, ".tim");
    sendCommand(cmd);
    return recvRetNumber(number);
}

bool NexScrolltext::setCycleTim(uint32_t number)
{
    if (number < 8)
    {
        number = 8;
    }
    
    char cmd[NEXTION_COMMAND_BUFFER];
    sprintf(cmd, "%s.tim=%u", getObjName(), number);
    sendCommand(cmd);
	
    memset(cmd, 0, NEXTION_COMMAND_BUFFER);
    strcat(cmd, "ref ");
    strcat(cmd, getObjName());
    sendCommand(cmd);
    return recvRetCommandFinished();
}


bool NexScrolltext::setTriggerEn(bool en)
{
    char cmd[NEXTION_COMMAND_BUFFER];
    sprintf(cmd, "%s.en=%d", getObjName(), en);
    sendCommand(cmd);
    return recvRetCommandFinished();
}

bool NexScrolltext::getTriggerEn(void)
{
    char cmd[NEXTION_COMMAND_BUFFER];
    sprintf(cmd, "get %s.en", getObjName());
    sendCommand(cmd);
    return recvRetCommandFinished();
}
