/**
 * @file NexCrop.cpp
 *
 * The implementation of class NexCrop.
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

#include "NexCrop.h"

NexCrop::NexCrop(NexHardware *hw, uint8_t pid, uint8_t cid, const char *name):
NexVisibleObject(hw, pid, cid, name) {}

bool NexCrop::Get_background_crop_picc(uint32_t *number)
{
    String cmd = String("get ");
    cmd += getObjName();
    cmd += ".picc";
    hw->sendCommand(cmd.c_str());
    return hw->recvRetNumber(number);
}

bool NexCrop::Set_background_crop_picc(uint32_t number)
{
    char buf[10] = {0};
    String cmd;

    utoa(number, buf, 10);
    cmd += getObjName();
    cmd += ".picc=";
    cmd += buf;

    hw->sendCommand(cmd.c_str());
    return hw->recvRetCommandFinished();
}

bool NexCrop::getPic(uint32_t *number)
{
    String cmd = String("get ");
    cmd += getObjName();
    cmd += ".picc";
    hw->sendCommand(cmd.c_str());
    return hw->recvRetNumber(number);
}

bool NexCrop::setPic(uint32_t number)
{
    char buf[10] = {0};
    String cmd;

    utoa(number, buf, 10);
    cmd += getObjName();
    cmd += ".picc=";
    cmd += buf;

    hw->sendCommand(cmd.c_str());
    return hw->recvRetCommandFinished();
}

