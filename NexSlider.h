/**
 * @file NexSlider.h
 *
 * The definition of class NexSlider. 
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

#ifndef __NEXSLIDER_H__
#define __NEXSLIDER_H__

#include "NexTouch.h"
#include "NexHardware.h"
/**
 * @addtogroup Component 
 * @{ 
 */

/**
 * NexSlider component. 
 */
class NexSlider: public NexTouch
{
public: /* methods */
    /**
     * @copydoc NexObject::NexObject(uint8_t pid, uint8_t cid, const char *name);
     */
    NexSlider(uint8_t pid, uint8_t cid, const char *name);

    /**
     * Get the value of slider. 
     * 
     * @param number - an output parameter to save the value of slider.  
     * 
     * @retval true - success. 
     * @retval false - failed. 
     */
    bool getValue(uint32_t *number);
    
    /**
     * Set the value of slider.
     *
     * @param number - the value of slider.  
     *
     * @retval true - success. 
     * @retval false - failed. 
     */
    bool setValue(uint32_t number);
	
    /**
     * Get bco attribute of component
     *
     * @param number - buffer storing data retur
     * @return the length of the data 
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
     * @return the length of the data 
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
     * Get wid attribute of component
     *
     * @param number - buffer storing data retur
     * @return the length of the data 
     */
    bool getPointerThicknessWid(uint32_t *number);	

    /**
     * Set wid attribute of component
     *
     * @param number - To set up the data
     * @return true if success, false for failure
     */
    bool setPointerThicknessWid(uint32_t number);		

    /**
     * Get hig attribute of component
     *
     * @param number - buffer storing data retur
     * @return the length of the data 
     */
    bool getCursorHeightHig(uint32_t *number);	

    /**
     * Set hig attribute of component
     *
     * @param number - To set up the data
     * @return true if success, false for failure
     */
    bool setCursorHeightHig(uint32_t number);			
	
    /**
     * Get maxval attribute of component
     *
     * @param number - buffer storing data retur
     * @return the length of the data 
     */
    bool getMaxval(uint32_t *number);	
	
    /**
     * Set maxval attribute of component
     *
     * @param number - To set up the data
     * @return true if success, false for failure
     */
    bool setMaxval(uint32_t number);		
	
    /**
     * Get minval attribute of component
     *
     * @param number - buffer storing data retur
     * @return the length of the data 
     */
    bool getMinval(uint32_t *number);	
	
    /**
     * Set minval attribute of component
     *
     * @param number - To set up the data
     * @return true if success, false for failure
     */
    bool setMinval(uint32_t number);		
};
/**
 * @}
 */


#endif /* #ifndef __NEXSLIDER_H__ */
