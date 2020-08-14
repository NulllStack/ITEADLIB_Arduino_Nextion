/**
 * @file NexButton.h
 *
 * The definition of class NexButton. 
 *
 * @author Wu Pengfei (email:<pengfei.wu@itead.cc>)
 * @date 2015/8/13
 *
 * @copyright 
 * Copyright (C) 2014-2015 ITEAD Intelligent Systems Co., Ltd. \n
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of
 * the License, or (at your option) any later version.
 */

#ifndef __NEXBUTTON_H__
#define __NEXBUTTON_H__

#include "NexTouch.h"
#include "NexHardware.h"
/**
 * @addtogroup Component 
 * @{ 
 */

/**
 * NexButton component. 
 *
 * Commonly, you want to do something after push and pop it. It is recommanded that only
 * call @ref NexTouch::attachPop to satisfy your purpose. 
 * 
 * @warning Please do not call @ref NexTouch::attachPush on this component, even though you can. 
 */
class NexButton : public NexTouch
{
public: /* methods */
    /**
     * @copydoc NexObject::NexObject(uint8_t pid, uint8_t cid, const char *name);
     */
    NexButton(uint8_t pid, uint8_t cid, const char *name);

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
     * @return true if success, false for failure. 
     */
    bool setText(const char *buffer);

    /**
     * Get bco attribute of component
     *
     * @param number - buffer storing data return
     * @retval true - success
     * @retval false - fail
     */
    bool getBackgroundColorBco(uint32_t *number);

    /**
     * Set bco attribute of component
     *
     * @param number - To set up the data
     * @retval true - success
     * @retval false - fail
     */
    bool setBackgroundColorBco(uint32_t number);

    /**
     * Get bco2 attribute of component
     *
     * @param number - buffer storing data return
     * @retval true - success
     * @retval false - fail
     */
    bool getPressBackgroundColorBco2(uint32_t *number);

    /**
     * Set bco2 attribute of component
     *
     * @param number - To set up the data
     * @retval true - success
     * @retval false - fail
     */
    bool setPressBackgroundColorBco2(uint32_t number);

    /**
     * Get pco attribute of component
     *
     * @param number - buffer storing data return
     * @retval true - success
     * @retval false - fail
     */
    bool getFontColorPco(uint32_t *number);

    /**
     * Set pco attribute of component
     *
     * @param number - To set up the data
     * @retval true - success
     * @retval false - fail
     */
    bool setFontColorPco(uint32_t number);

    /**
     * Get pco2 attribute of component
     *
     * @param number - buffer storing data return
     * @retval true - success
     * @retval false - fail
     */
    bool getPressFontColorPco2(uint32_t *number);

    /**
     * Set pco2 attribute of component
     *
     * @param number - To set up the data
     * @retval true - success
     * @retval false - fail
     */
    bool setPressFontColorPco2(uint32_t number);

    /**
     * Get xcen attribute of component
     *
     * @param number - buffer storing data return
     * @retval true - success
     * @retval false - fail
     */
    bool getPlaceXcen(uint32_t *number);

    /**
     * Set xcen attribute of component
     *
     * @param number - To set up the data
     * @retval true - success
     * @retval false - fail
     */
    bool setPlaceXcen(uint32_t number);

    /**
     * Get ycen attribute of component
     *
     * @param number - buffer storing data return
     * @retval true - success
     * @retval false - fail
     */
    bool getPlaceYcen(uint32_t *number);

    /**
     * Set ycen attribute of component
     *
     * @param number - To set up the data
     * @retval true - success
     * @retval false - fail
     */
    bool setPlaceYcen(uint32_t number);

    /**
     * Get font attribute of component
     *
     * @param number - buffer storing data return
     * @retval true - success
     * @retval false - fail
     */
    bool getFont(uint32_t *number);

    /**
     * Set font attribute of component
     *
     * @param number - To set up the data
     * @retval true - success
     * @retval false - fail
     */
    bool setFont(uint32_t number);

    /**
     * Get picc attribute of component
     *
     * @param number - buffer storing data return
     * @retval true - success
     * @retval false - fail
     */
    bool getBackgroundCropPicc(uint32_t *number);

    /**
     * Set picc attribute of component
     *
     * @param number - To set up the data
     * @retval true - success
     * @retval false - fail
     */
    bool setBackgroundCropPicc(uint32_t number);

    /**
     * Get picc2 attribute of component
     *
     * @param number - buffer storing data return
     * @retval true - success
     * @retval false - fail
     */
    bool getPressBackgroundCropPicc2(uint32_t *number);

    /**
     * Set picc2 attribute of component
     *
     * @param number - To set up the data
     * @retval true - success
     * @retval false - fail
     */
    bool setPressBackgroundCropPicc2(uint32_t number);

    /**
     * Get pic attribute of component
     *
     * @param number - buffer storing data return
     * @retval true - success
     * @retval false - fail
     */
    bool getBackgroundImagePic(uint32_t *number);

    /**
     * Set pic attribute of component
     *
     * @param number - To set up the data
     * @retval true - success
     * @retval false - fail
     */
    bool setBackgroundImagePic(uint32_t number);

    /**
     * Get pic2 attribute of component
     *
     * @param number - buffer storing data return
     * @retval true - success
     * @retval false - fail
     */
    bool getPressBackgroundImagePic2(uint32_t *number);

    /**
     * Set pic2 attribute of component
     *
     * @param number - To set up the data
     * @retval true - success
     * @retval false - fail
     */
    bool setPressBackgroundImagePic2(uint32_t number);
};
/**
 * @}
 */

#endif /* #ifndef __NEXBUTTON_H__ */
