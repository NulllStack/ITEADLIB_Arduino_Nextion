/**
 * @file NexQRcode.h
 *
 * The definition of class NexQRcode. 
 *
 * @author Wu Liejin (email:<liejin.wu@itead.cc>)
 * @date 2020/8/7
 *
 * @copyright 
 * Copyright (C) 2014-2020 ITEAD Intelligent Systems Co., Ltd. \n
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of
 * the License, or (at your option) any later version.
 */

#ifndef __NEXQRCODE_H__
#define __NEXQRCODE_H__

#include "NexTouch.h"
#include "NexHardware.h"
/**
 * @addtogroup Component 
 * @{ 
 */

/**
 * NexQRcode component.
 */
class NexQRcode: public NexTouch
{
public: /* methods */
    /**
     * @copydoc NexObject::NexObject(uint8_t pid, uint8_t cid, const char *name);
     */
    NexQRcode(uint8_t pid, uint8_t cid, const char *name);

    /**
     * Get text attribute of component.
     *
     * @param buffer - buffer storing text returned. 
     * @param len - length of buffer. 
     * @return The real length of text returned. 
     */
    uint16_t getText(char *buffer, uint16_t len);

    /**
     * Set text attribute of component.
     *
     * @param buffer - text buffer terminated with '\0'. 
     * 
     * @retval true - success. 
     * @retval false - failed. 
     */
    bool setText(const char *buffer);

    /**
     * Get bco attribute of component
     *
     * @param number - an output parameter to save background color
     * 
     * @retval true - success. 
     * @retval false - failed. 
     */
    bool Get_background_color_bco(uint32_t* number);

    /**
     * Get bco attribute of component
     *
     * @param number - an output parameter to save foreground color
     * 
     * @retval true - success. 
     * @retval false - failed. 
     */
    bool Get_foreground_color_pco(uint32_t* number);

    /**
     * Set bco attribute of component
     *
     * @param number - a parameter to set foreground color
     * 
     * @retval true - success. 
     * @retval false - failed. 
     */
    bool Set_background_color_bco(uint32_t number);

    /**
     * Set pco attribute of component
     *
     * @param number - a parameter to set background color
     * 
     * @retval true - success. 
     * @retval false - failed. 
     */
    bool Set_foreground_color_pco(uint32_t number);

    /**
     * Get picture's number.
     * 
     * @param number - an output parameter to save picture number.  
     * 
     * @retval true - success. 
     * @retval false - failed. 
     */
    bool getPic(uint32_t* number);

    /**
     * Set picture's number.
     * 
     * @param number -the picture number.
     *
     * @retval true - success.
     * @retval false - failed. 
     */
    bool setPic(uint32_t number);

    /**
     * Get sta attribute of component.
     * 
     * @retval true - Has.
     * @retval false - None. 
     */
    bool Get_logo_sta();
    

private:
    bool sta_enable;
};
/**
 * @}
 */

#endif  /* #ifndef __NEXQRCODE_H__ */
