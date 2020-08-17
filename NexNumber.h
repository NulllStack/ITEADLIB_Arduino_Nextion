/**
 * @file NexNumber.h
 *
 * The definition of class NexNumber. 
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
 
#ifndef __NEXNUMBER_H__
#define __NEXNUMBER_H__

#include "NexTouch.h"
#include "NexHardware.h"
/**
 * @addtogroup Component 
 * @{ 
 */

/**
 * NexNumber component.
 */
class NexNumber: public NexTouch
{
public: /* methods */
    /**
     * @copydoc NexObject::NexObject(uint8_t pid, uint8_t cid, const char *name);
     */
    NexNumber(uint8_t pid, uint8_t cid, const char *name);
    
    /**
     * Get number attribute of component.
     *
     * @param number - buffer storing text returned. 
     * @return true if success, false for failure. 
     */
    bool getValue(int32_t *number);
    
    /**
     * Set number attribute of component.
     *
     * @param number - number buffer. 
     * @return true if success, false for failure. 
     */
    bool setValue(int32_t number);
	
    /**
     * Get bco attribute of component
     *
     * @param number - buffer storing data retur
     * @return true if success, false for failure. 
     */
    bool getBackgroundColorBco(uint32_t *number);
	
    /**
     * Set bco attribute of component
     *
     * @param number - To set up the data
     * @return true if success, false for failure
     */
    bool setBackgroundColorBco(uint32_t number);
	
    /**
     * Get pco attribute of component
     *
     * @param number - buffer storing data retur
     * @return true if success, false for failure. 
     */
    bool getFontColorPco(uint32_t *number);	

    /**
     * Set pco attribute of component
     *
     * @param number - To set up the data
     * @return true if success, false for failure
     */
    bool setFontColorPco(uint32_t number);			
	
    /**
     * Get xcen attribute of component
     *
     * @param number - buffer storing data retur
     * @return true if success, false for failure. 
     */
    bool getPlaceXcen(uint32_t *number);	

    /**
     * Set xcen attribute of component
     *
     * @param number - To set up the data
     * @return true if success, false for failure
     */
    bool setPlaceXcen(uint32_t number);			
	
    /**
     * Get ycen attribute of component
     *
     * @param number - buffer storing data retur
     * @return true if success, false for failure. 
     */
    bool getPlaceYcen(uint32_t *number);	

    /**
     * Set ycen attribute of component
     *
     * @param number - To set up the data
     * @return true if success, false for failure
     */
    bool setPlaceYcen(uint32_t number);			
	
    /**
     * Get font attribute of component
     *
     * @param number - buffer storing data retur
     * @return true if success, false for failure. 
     */
    bool getFont(uint32_t *number);	

    /**
     * Set font attribute of component
     *
     * @param number - To set up the data
     * @return true if success, false for failure
     */
    bool setFont(uint32_t number);			
	
    /**
     * Get lenth attribute of component
     *
     * @param number - buffer storing data retur
     * @return true if success, false for failure. 
     */
    bool getNumberLength(uint32_t *number);

    /**
     * Set lenth attribute of component
     *
     * @param number - To set up the data
     * @return true if success, false for failure
     */
    bool setNumberLength(uint32_t number);	

    /**
     * Get picc attribute of component
     *
     * @param number - buffer storing data return
     * @return true if success, false for failure. 
     */
    bool getBackgroundCropPicc(uint32_t *number);	

    /**
     * Set picc attribute of component
     *
     * @param number - To set up the data
     * @return true if success, false for failure
     */
    bool setBackgroundCropPicc(uint32_t number);	

    /**
     * Get pic attribute of component
     *
     * @param number - buffer storing data return
     * @return true if success, false for failure. 
     */
    bool getBackgroundImagePic(uint32_t *number);	

    /**
     * Set pic attribute of component
     *
     * @param number - To set up the data
     * @return true if success, false for failure
     */
    bool setBackgroundImagePic(uint32_t number);			
};

/**
 * @}
 */

#endif /* #ifndef __NEXNUMBER_H__ */
