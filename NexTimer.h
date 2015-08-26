/**
 * @file NexButton.h
 *
 * The definition of class NexButton. 
 *
 * @author huang xianming (email:<xianming.huang@itead.cc>)
 * @date 2015/8/26
 *
 * @copyright 
 * Copyright (C) 2014-2015 ITEAD Intelligent Systems Co., Ltd. \n
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of
 * the License, or (at your option) any later version.
 */

#ifndef __NEXTIMER_H__
#define __NEXTIMER_H__

#include "NexTouch.h"
#include "NexHardware.h"
/**
 * @addtogroup Component 
 * @{ 
 */

/**
 * NexTimer component. 
 *
 * Commonly, you want to do something after set timer cycle and enable it. It is recommanded that only
 * call @ref NexTimer::attachPop to satisfy your purpose. 
 * 
 */
class NexTimer: public NexTouch
{
public: /* methods */

    /**
     * @copydoc NexObject::NexObject(uint8_t pid, uint8_t cid, const char *name);
     */
    NexTimer(uint8_t pid, uint8_t cid, const char *name);

     /**
     * Attach an callback function of timer respond event. 
     *
     * @param push - callback called with ptr when a timer respond event occurs. 
     * @param ptr - parameter passed into push[default:NULL]. 
     * @return none. 
     *
     * @note If calling this method multiply, the last call is valid. 
     */
    void attachTimer(NexTouchEventCb timer, void *ptr = NULL);

    /**
     * Detach an callback function. 
     * 
     * @return none. 
     */
    void detachTimer(void);

     /**
     * Get the value of timer cycle val. 
     * 
     * @param number - an output parameter to save the value of timer cycle.  
     * 
     * @retval true - success. 
     * @retval false - failed. 
     */
    bool getCycle(uint32_t *number); 
     /**
      * Set the value of timer cycle val.
      *
      * @param number - the value of timer cycle.  
      *
      * @retval true - success. 
      * @retval false - failed. 
      */

    bool setCycle(uint32_t number);   
  /**
   *contorl timer enable.
   */
    bool enable(void);
  /**
   *contorl timer disable.
   */
    bool disable(void); 


};
/**
 * @}
 */


#endif /* #ifndef __NEXBUTTON_H__ */