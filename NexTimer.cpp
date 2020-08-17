/**
 * @file NexTimer.cpp
 *
 * The implementation of class NexTimer. 
 *
 * @author  huang xianming (email:<xianming.huang@itead.cc>)
 * @date    2015/8/26
 * @copyright 
 * Copyright (C) 2014-2015 ITEAD Intelligent Systems Co., Ltd. \n
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of
 * the License, or (at your option) any later version.
 */

#include "NexTimer.h"

NexTimer::NexTimer(uint8_t pid, uint8_t cid, const char *name)
    :NexTouch(pid, cid, name)
{
}

void NexTimer::attachTimer(NexTouchEventCb timer, void *ptr)
{
    NexTouch::attachPop(timer, ptr);
}

void NexTimer::detachTimer(void)
{
    NexTouch::detachPop();
}

bool NexTimer::getCycle(uint32_t *number)
{
    char cmd[NEXTION_COMMAND_BUFFER] = "get ";
    strcat(cmd, getObjName());
    strcat(cmd, ".tim");
    sendCommand(cmd);
    return recvRetNumber(number);
}

bool NexTimer::setCycle(uint32_t number)
{
    if (number < 50)
    {
        number = 50;
    }

    char cmd[NEXTION_COMMAND_BUFFER];
    sprintf(cmd, "%s.tim=%u", getObjName(), number);
    sendCommand(cmd);
    return recvRetCommandFinished();
}

bool NexTimer::setTriggerEn(bool en)
{
    char cmd[NEXTION_COMMAND_BUFFER];
    sprintf(cmd, "%s.en=%d", getObjName(), en);
    sendCommand(cmd);
    return recvRetCommandFinished();
}

bool NexTimer::getTriggerEn(void)
{
    char cmd[NEXTION_COMMAND_BUFFER];
    sprintf(cmd, "get %s.en", getObjName());
    sendCommand(cmd);
    return recvRetCommandFinished();
}
