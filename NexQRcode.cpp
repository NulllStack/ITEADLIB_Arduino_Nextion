/**
 * @file NexQRcode.cpp
 *
 * The implementation of class NexQRcode. 
 *
 * @author  Wu Liejin (email:<liejin.wu@itead.cc>)
 * @date    2020/8/7
 * @copyright 
 * Copyright (C) 2014-2020 ITEAD Intelligent Systems Co., Ltd. \n
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of
 * the License, or (at your option) any later version.
 */

#include "NexQRcode.h"

NexQRcode::NexQRcode(uint8_t pid, uint8_t cid, const char *name)
    :NexTouch(pid, cid, name)
{
}

uint16_t NexQRcode::getText(char *buffer, uint16_t len)
{
    String cmd;
    cmd += "get ";
    cmd += getObjName();
    cmd += ".txt";
    sendCommand(cmd.c_str());
    return recvRetString(buffer,len);
}

bool NexQRcode::setText(const char *buffer)
{
    String cmd;
    cmd += getObjName();
    cmd += ".txt=\"";
    cmd += buffer;
    cmd += "\"";
    sendCommand(cmd.c_str());
    return recvRetCommandFinished();
}

bool NexQRcode::Get_background_color_bco(uint32_t* number)
{
    char cmd[20];
    sprintf_s(cmd, 20, "get %s.bco", getObjName());
    sendCommand(cmd);
    return recvRetNumber(number);
}

bool NexQRcode::Get_foreground_color_pco(uint32_t* number)
{
    char cmd[20];
    sprintf_s(cmd, 20, "get %s.pco", getObjName());
    sendCommand(cmd);
    return recvRetNumber(number);
}

bool NexQRcode::Set_background_color_bco(uint32_t number)
{
    char cmd[20];
    sprintf_s(cmd, 20, "%s.bco=%d", getObjName(), number);
    sendCommand(cmd);
    return recvRetCommandFinished();
}

bool NexQRcode::Set_foreground_color_pco(uint32_t number)
{
    char cmd[20];
    sprintf_s(cmd, 20, "%s.pco=%d", getObjName(), number);
    sendCommand(cmd);
    return recvRetCommandFinished();
}

bool NexQRcode::getPic(uint32_t* number)
{
    char cmd[20];
    sprintf_s(cmd, 20, "get %s.pic", getObjName());
    sendCommand(cmd);
    return recvRetNumber(number);
}

bool NexQRcode::setPic(uint32_t number)
{
    char cmd[20];
    sprintf_s(cmd, 20, "%s.pic=%d", getObjName(), number);
    sendCommand(cmd);
    return recvRetCommandFinished();
}
