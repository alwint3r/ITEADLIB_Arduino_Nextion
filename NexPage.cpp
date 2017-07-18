/**
 * @file NexPage.cpp
 *
 * The implementation of class NexPage.
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

#include "NexPage.h"

NexPage::NexPage(NexHardware *hw, uint8_t pid, uint8_t cid, const char *name)
    :NexTouch(pid, cid, name)
{
    this->hw = hw;
}

bool NexPage::show(void)
{
    const char *name = getObjName();
    if (!name)
    {
        return false;
    }

    String cmd = String("page ");
    cmd += name;
    hw->sendCommand(cmd.c_str());
    return hw->recvRetCommandFinished();
}

bool NexPage::setBackgroundColor(uint32_t color) {
    char buffer[10] = {0};
    String cmd;

    utoa(color, buffer, 10);
    cmd += getObjName();
    cmd += ".bco=";
    cmd += buffer;
    hw->sendCommand(cmd.c_str());

    cmd = "";
    cmd += "ref ";
    cmd += getObjName();
    hw->sendCommand(cmd.c_str());

    return hw->recvRetCommandFinished();
}

