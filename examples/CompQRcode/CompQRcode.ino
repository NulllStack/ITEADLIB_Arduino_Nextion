/**
 * @example CompQRcode.ino
 *
 * @par How to Use
 * This example shows that,
 * the shape of current qrcode will be regenerated every second.  
 *
 * @author  Wu Liejin (email:<liejin.wu@itead.cc>)
 * @date    2020/8/11
 * @copyright 
 * Copyright (C) 2014-2020 ITEAD Intelligent Systems Co., Ltd. \n
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of
 * the License, or (at your option) any later version.
 */

#include "Nextion.h"

/*
 * Declare a qrcode object [page id:0,component id:1, component name: "qr0"]. 
 */
NexQRcode qr0 = NexQRcode(0, 1, "qr0");
char szTimeCount[20];
int ntimeCount;

void setup(void)
{
    /* Set the baudrate which is for debug and communicate with Nextion screen. */
    nexInit(Serial1);
    
    dbSerialPrintln("setup done"); 
}

void loop(void)
{
    /*
     * when one second passed,update the current passed second to the text attribute of component.
     */
    itoa(ntimeCount, szTimeCount, 10);
    qr0.setText(szTimeCount);
    ntimeCount++;
    delay(1000);
}
