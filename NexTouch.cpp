/**
 * @file NexTouch.cpp
 *
 * The implementation of class NexTouch.
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
#include "NexTouch.h"


NexTouch::NexTouch(uint8_t pid, uint8_t cid, const char *name)
    :NexObject(pid, cid, name)
{
    this->__cb_push = NULL;
    this->__cb_pop = NULL;
    this->__cbpop_ptr = NULL;
    this->__cbpush_ptr = NULL;
}

void NexTouch::attachPush(NexTouchEventCb push, void *ptr)
{
    this->__cb_push = push;
    this->__cbpush_ptr = ptr;
}

void NexTouch::detachPush(void)
{
    this->__cb_push = NULL;
    this->__cbpush_ptr = NULL;
}

void NexTouch::attachPop(NexTouchEventCb pop, void *ptr)
{
    this->__cb_pop = pop;
    this->__cbpop_ptr = ptr;
}

void NexTouch::detachPop(void)
{
    this->__cb_pop = NULL;
    this->__cbpop_ptr = NULL;
}

void NexTouch::push(void)
{
    if (__cb_push)
    {
        __cb_push(__cbpush_ptr);
    }
}

void NexTouch::pop(void)
{
    if (__cb_pop)
    {
        __cb_pop(__cbpop_ptr);
    }
}

void NexTouch::iterate(NexTouchVector* touchVector, uint8_t pid, uint8_t cid, int32_t event)
{
    NexTouch* touchable = nullptr;


    for (NexTouchVector::iterator it = touchVector->begin(); it != touchVector->end(); ++it) {
        touchable = *it;

        if (touchable->getObjPid() == pid && touchable->getObjCid() == cid) {
            if (NEX_EVENT_PUSH == event)
            {
                touchable->push();
            }
            else if (NEX_EVENT_POP == event)
            {
                touchable->pop();
            }

            break;
        }
    }
}

