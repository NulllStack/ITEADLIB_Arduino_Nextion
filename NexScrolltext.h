/**
 * @file NexScrolltext.h
 *
 * The definition of class NexScrolltext. 
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
 
#ifndef __NEXSCROLLTEXT_H__
#define __NEXSCROLLTEXT_H__

#include "NexTouch.h"
#include "NexHardware.h"
/**
 * @addtogroup Component 
 * @{ 
 */

/**
 * NexText component.
 */
class NexScrolltext: public NexTouch
{
public: /* methods */
    /**
     * @copydoc NexObject::NexObject(uint8_t pid, uint8_t cid, const char *name);
     */
    NexScrolltext(uint8_t pid, uint8_t cid, const char *name);
    
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
     * Get xcen attribute of component
     *
     * @param number - buffer storing data retur
     * @return the length of the data 
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
     * @return the length of the data 
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
     * @return the length of the data 
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
     * Get picc attribute of component
     *
     * @param number - buffer storing data retur
     * @return the length of the data 
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
     * @param number - buffer storing data retur
     * @return the length of the data 
     */
    bool getBackgroundImagePic(uint32_t *number);	

    /**
     * Set pic attribute of component
     *
     * @param number - To set up the data
     * @return true if success, false for failure
     */
    bool setBackgroundImagePic(uint32_t number);	

    /**
     * Get dir attribute of component
     *
     * @param number - buffer storing data retur
     * @return the length of the data 
     */
    bool getScrollDirection(uint32_t *number);		
	
    /**
     * Set dir attribute of component
     *
     * @param number - To set up the data
     * @return true if success, false for failure
     */
    bool setScrollDirection(uint32_t number);	

    /**
     * Get dis attribute of component
     *
     * @param number - buffer storing data retur
     * @return the length of the data 
     */
    bool getScrollDistance(uint32_t *number);	

    /**
     * Set dis attribute of component
     *
     * @param number - To set up the data
     * @return true if success, false for failure
     */
    bool setScrollDistance(uint32_t number);	

    /**
     * Get tim attribute of component
     *
     * @param number - buffer storing data retur
     * @return the length of the data 
     */
    bool getCycle(uint32_t *number);

    /**
     * Set tim attribute of component
     *
     * @param number - To set up the data
     * @return true if success, false for failure
     */
    bool setCycle(uint32_t number);			
	
    /**
     * Set en attribute of component
     *
     * @param number - To set up the data
     * @return true if success, false for failure
     */
    bool setTriggerEn(bool en);

    /**
     * Get tim attribute of component
     *
     * @param number - buffer storing data retur
     * @return true if success, false for failure
     */
    bool getTriggerEn(void);
};

/**
 * @}
 */

#endif /* #ifndef __NEXSCROLLTEXT_H__ */