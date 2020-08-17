/**
 * @file NexWaveform.h
 *
 * The definition of class NexWaveform. 
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
#ifndef __NEXWAVEFORM_H__
#define __NEXWAVEFORM_H__

#include "NexTouch.h"
#include "NexHardware.h"
/**
 * @addtogroup Component 
 * @{ 
 */

/**
 * NexWaveform component.
 */
class NexWaveform: public NexObject
{
public: /* methods */
    /**
     * @copydoc NexObject::NexObject(uint8_t pid, uint8_t cid, const char *name);
     */
    NexWaveform(uint8_t pid, uint8_t cid, const char *name);
    
    /**
     * Add value to show. 
     *
     * @param ch - channel of waveform(0-3). 
     * @param number - the value of waveform.  
     *
     * @retval true - success. 
     * @retval false - failed. 
     */
    bool addValue(uint8_t ch, uint8_t number);
	
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
     * Get gdc attribute of component
     *
     * @param number - buffer storing data retur
     * @return the length of the data 
     */
    bool getGridColorGdc(uint32_t *number);	

    /**
     * Set gdc attribute of component
     *
     * @param number - To set up the data
     * @return true if success, false for failure
     */
    bool setGridColorGdc(uint32_t number);			
	
    /**
     * Get gdw attribute of component
     *
     * @param number - buffer storing data retur
     * @return the length of the data 
     */
    bool getGridWidthGdw(uint32_t *number);	

    /**
     * Set gdw attribute of component
     *
     * @param number - To set up the data
     * @return true if success, false for failure
     */
    bool setGridWidthGdw(uint32_t number);			
	
    /**
     * Get gdh attribute of component
     *
     * @param number - buffer storing data retur
     * @return the length of the data 
     */
    bool getGridHeightGdh(uint32_t *number);

    /**
     * Set gdh attribute of component
     *
     * @param number - To set up the data
     * @return true if success, false for failure
     */
    bool setGridHeightGdh(uint32_t number);			
	
    /**
     * Get pco0 attribute of component
     *
     * @param number - buffer storing data retur
     * @param channel - Which channel
     * @return true if success, false for failure
     */
    bool getChannelColorPco(uint32_t *number, uint8_t channel = 0);	

    /**
     * Set pco0 attribute of component
     *
     * @param number - To set up the data
     * @param channel - Which channel to set
     * @return true if success, false for failure
     */
    bool setChannelColorPco(uint32_t number, uint8_t channel = 0);
};

/**
 * @}
 */

#endif /* #ifndef __NEXWAVEFORM_H__ */
