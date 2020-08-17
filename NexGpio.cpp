/**
 * @file NexGpio.cpp
 *
 * The implementation of class NexGpio. 
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
#include "NexGpio.h"

bool NexGpio::pinMode(uint32_t port,uint32_t mode,uint32_t control_id)
{
    char cmd[NEXTION_COMMAND_BUFFER];
    sprintf(cmd, "cfgpio %d,%d,%d", port, mode, control_id);
    sendCommand(cmd);
    return recvRetCommandFinished();
}

bool NexGpio::digitalWrite(uint32_t port,uint32_t value)
{
    char cmd[NEXTION_COMMAND_BUFFER];
    sprintf(cmd, "pio%d=%d", port, value);
    sendCommand(cmd);
    return recvRetCommandFinished();
}

uint32_t NexGpio::digitalRead(uint32_t port)
{
    uint32_t number;
    char cmd[NEXTION_COMMAND_BUFFER];
    sprintf(cmd, "get pio%d", port);
    sendCommand(cmd);
    recvRetNumber(&number);
    return number;
}

bool NexGpio::analogWrite(uint32_t port,uint32_t value)
{
    char cmd[NEXTION_COMMAND_BUFFER];
    sprintf(cmd, "pwm%d=%d", port, value);
    sendCommand(cmd);
    return recvRetCommandFinished();   
}

bool NexGpio::setPwmfreq(uint32_t value)
{
    char cmd[NEXTION_COMMAND_BUFFER];
    sprintf(cmd, "pwmf=%u", value);
    sendCommand(cmd);
    return recvRetCommandFinished();   
}

uint32_t NexGpio::getPwmfreq(uint32_t *number)
{
    char cmd[10] = "get pwmf";
    sendCommand(cmd);
    return recvRetNumber(number);
}