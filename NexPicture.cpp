/**
 * @file NexPicture.cpp
 *
 * The implementation of class NexPicture. 
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

#include "NexPicture.h"

NexPicture::NexPicture(uint8_t pid, uint8_t cid, const char *name)
    :NexTouch(pid, cid, name)
{
}
 
bool NexPicture::getPic(uint32_t *number)
{
    char cmd[NEXTION_COMMAND_BUFFER] = "get ";
    strcat(cmd, getObjName());
    strcat(cmd, ".pic");
    sendCommand(cmd);
    return recvRetNumber(number);
}

bool NexPicture::setPic(uint32_t number)
{
    char cmd[NEXTION_COMMAND_BUFFER];
    sprintf(cmd, "%s.pic=%d", getObjName(), number);
    sendCommand(cmd);
    return recvRetCommandFinished();
}
