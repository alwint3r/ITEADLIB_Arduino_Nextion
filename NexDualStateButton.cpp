/**
 * @file NexDualStateButton.cpp
 *
 * The implementation of class NexDSButton.
 *
 * @author  huang xianming (email:<xianming.huang@itead.cc>)
 * @date    2015/11/11
 * @copyright
 * Copyright (C) 2014-2015 ITEAD Intelligent Systems Co., Ltd. \n
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of
 * the License, or (at your option) any later version.
 */

#include "NexDualStateButton.h"

NexDSButton::NexDSButton(NexHardware *hw, uint8_t pid, uint8_t cid, const char *name):
NexVisibleObject(hw, pid, cid, name) {}

bool NexDSButton::getValue(uint32_t *number)
{
    String cmd = String("get ");
    cmd += getObjName();
    cmd += ".val";
    hw->sendCommand(cmd.c_str());
    return hw->recvRetNumber(number);
}

bool NexDSButton::setValue(uint32_t number)
{
    char buf[10] = {0};
    String cmd;

    utoa(number, buf, 10);
    cmd += getObjName();
    cmd += ".val=";
    cmd += buf;

    hw->sendCommand(cmd.c_str());
    return hw->recvRetCommandFinished();
}

uint16_t NexDSButton::getText(char *buffer, uint16_t len)
{
    String cmd;
    cmd += "get ";
    cmd += getObjName();
    cmd += ".txt";
    hw->sendCommand(cmd.c_str());
    return hw->recvRetString(buffer,len);
}

bool NexDSButton::setText(const char *buffer)
{
    String cmd;
    cmd += getObjName();
    cmd += ".txt=\"";
    cmd += buffer;
    cmd += "\"";
    hw->sendCommand(cmd.c_str());
    return hw->recvRetCommandFinished();
}

uint32_t NexDSButton::Get_state0_color_bco0(uint32_t *number)
{
    String cmd;
    cmd += "get ";
    cmd += getObjName();
    cmd += ".bco0";
    hw->sendCommand(cmd.c_str());
    return hw->recvRetNumber(number);
}

bool NexDSButton::Set_state0_color_bco0(uint32_t number)
{
    char buf[10] = {0};
    String cmd;

    utoa(number, buf, 10);
    cmd += getObjName();
    cmd += ".bco0=";
    cmd += buf;
    hw->sendCommand(cmd.c_str());

    cmd="";
    cmd += "ref ";
    cmd += getObjName();
    hw->sendCommand(cmd.c_str());
    return hw->recvRetCommandFinished();
}

uint32_t NexDSButton::Get_state1_color_bco1(uint32_t *number)
{
    String cmd;
    cmd += "get ";
    cmd += getObjName();
    cmd += ".bco1";
    hw->sendCommand(cmd.c_str());
    return hw->recvRetNumber(number);
}

bool NexDSButton::Set_state1_color_bco1(uint32_t number)
{
    char buf[10] = {0};
    String cmd;

    utoa(number, buf, 10);
    cmd += getObjName();
    cmd += ".bco1=";
    cmd += buf;
    hw->sendCommand(cmd.c_str());

    cmd="";
    cmd += "ref ";
    cmd += getObjName();
    hw->sendCommand(cmd.c_str());
    return hw->recvRetCommandFinished();
}

uint32_t NexDSButton::Get_font_color_pco(uint32_t *number)
{
    String cmd;
    cmd += "get ";
    cmd += getObjName();
    cmd += ".pco";
    hw->sendCommand(cmd.c_str());
    return hw->recvRetNumber(number);
}

bool NexDSButton::Set_font_color_pco(uint32_t number)
{
    char buf[10] = {0};
    String cmd;

    utoa(number, buf, 10);
    cmd += getObjName();
    cmd += ".pco=";
    cmd += buf;
    hw->sendCommand(cmd.c_str());

    cmd = "";
    cmd += "ref ";
    cmd += getObjName();
    hw->sendCommand(cmd.c_str());
    return hw->recvRetCommandFinished();
}

uint32_t NexDSButton::Get_place_xcen(uint32_t *number)
{
    String cmd;
    cmd += "get ";
    cmd += getObjName();
    cmd += ".xcen";
    hw->sendCommand(cmd.c_str());
    return hw->recvRetNumber(number);
}

bool NexDSButton::Set_place_xcen(uint32_t number)
{
    char buf[10] = {0};
    String cmd;

    utoa(number, buf, 10);
    cmd += getObjName();
    cmd += ".xcen=";
    cmd += buf;
    hw->sendCommand(cmd.c_str());

    cmd = "";
    cmd += "ref ";
    cmd += getObjName();
    hw->sendCommand(cmd.c_str());
    return hw->recvRetCommandFinished();
}

uint32_t NexDSButton::Get_place_ycen(uint32_t *number)
{
    String cmd;
    cmd += "get ";
    cmd += getObjName();
    cmd += ".ycen";
    hw->sendCommand(cmd.c_str());
    return hw->recvRetNumber(number);
}

bool NexDSButton::Set_place_ycen(uint32_t number)
{
    char buf[10] = {0};
    String cmd;

    utoa(number, buf, 10);
    cmd += getObjName();
    cmd += ".ycen=";
    cmd += buf;
    hw->sendCommand(cmd.c_str());

    cmd = "";
    cmd += "ref ";
    cmd += getObjName();
    hw->sendCommand(cmd.c_str());
    return hw->recvRetCommandFinished();
}

uint32_t NexDSButton::getFont(uint32_t *number)
{
    String cmd;
    cmd += "get ";
    cmd += getObjName();
    cmd += ".font";
    hw->sendCommand(cmd.c_str());
    return hw->recvRetNumber(number);
}

bool NexDSButton::setFont(uint32_t number)
{
    char buf[10] = {0};
    String cmd;

    utoa(number, buf, 10);
    cmd += getObjName();
    cmd += ".font=";
    cmd += buf;
    hw->sendCommand(cmd.c_str());

    cmd = "";
    cmd += "ref ";
    cmd += getObjName();
    hw->sendCommand(cmd.c_str());
    return hw->recvRetCommandFinished();
}

uint32_t NexDSButton::Get_state0_crop_picc0(uint32_t *number)
{
    String cmd;
    cmd += "get ";
    cmd += getObjName();
    cmd += ".picc0";
    hw->sendCommand(cmd.c_str());
    return hw->recvRetNumber(number);
}

bool NexDSButton::Set_state0_crop_picc0(uint32_t number)
{
    char buf[10] = {0};
    String cmd;

    utoa(number, buf, 10);
    cmd += getObjName();
    cmd += ".picc0=";
    cmd += buf;
    hw->sendCommand(cmd.c_str());

    cmd = "";
    cmd += "ref ";
    cmd += getObjName();
    hw->sendCommand(cmd.c_str());
    return hw->recvRetCommandFinished();
}

uint32_t NexDSButton::Get_state1_crop_picc1(uint32_t *number)
{
    String cmd;
    cmd += "get ";
    cmd += getObjName();
    cmd += ".picc1";
    hw->sendCommand(cmd.c_str());
    return hw->recvRetNumber(number);
}

bool NexDSButton::Set_state1_crop_picc1(uint32_t number)
{
    char buf[10] = {0};
    String cmd;

    utoa(number, buf, 10);
    cmd += getObjName();
    cmd += ".picc1=";
    cmd += buf;
    hw->sendCommand(cmd.c_str());

    cmd = "";
    cmd += "ref ";
    cmd += getObjName();
    hw->sendCommand(cmd.c_str());
    return hw->recvRetCommandFinished();
}

uint32_t NexDSButton::Get_state0_image_pic0(uint32_t *number)
{
    String cmd;
    cmd += "get ";
    cmd += getObjName();
    cmd += ".pic0";
    hw->sendCommand(cmd.c_str());
    return hw->recvRetNumber(number);
}

bool NexDSButton::Set_state0_image_pic0(uint32_t number)
{
    char buf[10] = {0};
    String cmd;

    utoa(number, buf, 10);
    cmd += getObjName();
    cmd += ".pic0=";
    cmd += buf;
    hw->sendCommand(cmd.c_str());

    cmd = "";
    cmd += "ref ";
    cmd += getObjName();
    hw->sendCommand(cmd.c_str());
    return hw->recvRetCommandFinished();
}

uint32_t NexDSButton::Get_state1_image_pic1(uint32_t *number)
{
    String cmd;
    cmd += "get ";
    cmd += getObjName();
    cmd += ".pic1";
    hw->sendCommand(cmd.c_str());
    return hw->recvRetNumber(number);
}

bool NexDSButton::Set_state1_image_pic1(uint32_t number)
{
    char buf[10] = {0};
    String cmd;

    utoa(number, buf, 10);
    cmd += getObjName();
    cmd += ".pic1=";
    cmd += buf;
    hw->sendCommand(cmd.c_str());

    cmd = "";
    cmd += "ref ";
    cmd += getObjName();
    hw->sendCommand(cmd.c_str());
    return hw->recvRetCommandFinished();
}


