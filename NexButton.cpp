/**
 * @file NexButton.cpp
 *
 * The implementation of class NexButton.
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

#include "NexButton.h"

NexButton::NexButton(NexHardware *hw, uint8_t pid, uint8_t cid, const char *name):
NexVisibleObject(hw, pid, cid, name) {}

uint16_t NexButton::getText(char *buffer, uint16_t len)
{
    String cmd;
    cmd += "get ";
    cmd += getObjName();
    cmd += ".txt";
    hw->sendCommand(cmd.c_str());
    return hw->recvRetString(buffer,len);
}

bool NexButton::setText(const char *buffer)
{
    String cmd;
    cmd += getObjName();
    cmd += ".txt=\"";
    cmd += buffer;
    cmd += "\"";
    hw->sendCommand(cmd.c_str());
    return hw->recvRetCommandFinished();
}


uint32_t NexButton::Get_background_color_bco(uint32_t *number)
{
    String cmd;
    cmd += "get ";
    cmd += getObjName();
    cmd += ".bco";
    hw->sendCommand(cmd.c_str());
    return hw->recvRetNumber(number);
}

bool NexButton::Set_background_color_bco(uint32_t number)
{
    char buf[10] = {0};
    String cmd;

    utoa(number, buf, 10);
    cmd += getObjName();
    cmd += ".bco=";
    cmd += buf;
    hw->sendCommand(cmd.c_str());

    cmd="";
    cmd += "ref ";
    cmd += getObjName();
    hw->sendCommand(cmd.c_str());
    return hw->recvRetCommandFinished();
}

uint32_t NexButton::Get_press_background_color_bco2(uint32_t *number)
{
    String cmd;
    cmd += "get ";
    cmd += getObjName();
    cmd += ".bco2";
    hw->sendCommand(cmd.c_str());
    return hw->recvRetNumber(number);
}

bool NexButton::Set_press_background_color_bco2(uint32_t number)
{
    char buf[10] = {0};
    String cmd;

    utoa(number, buf, 10);
    cmd += getObjName();
    cmd += ".bco2=";
    cmd += buf;
    hw->sendCommand(cmd.c_str());

    cmd="";
    cmd += "ref ";
    cmd += getObjName();
    hw->sendCommand(cmd.c_str());
    return hw->recvRetCommandFinished();
}

uint32_t NexButton::Get_font_color_pco(uint32_t *number)
{
    String cmd;
    cmd += "get ";
    cmd += getObjName();
    cmd += ".pco";
    hw->sendCommand(cmd.c_str());
    return hw->recvRetNumber(number);
}

bool NexButton::Set_font_color_pco(uint32_t number)
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

uint32_t NexButton::Get_press_font_color_pco2(uint32_t *number)
{
    String cmd;
    cmd += "get ";
    cmd += getObjName();
    cmd += ".pco2";
    hw->sendCommand(cmd.c_str());
    return hw->recvRetNumber(number);
}

bool NexButton::Set_press_font_color_pco2(uint32_t number)
{
    char buf[10] = {0};
    String cmd;

    utoa(number, buf, 10);
    cmd += getObjName();
    cmd += ".pco2=";
    cmd += buf;
    hw->sendCommand(cmd.c_str());

    cmd = "";
    cmd += "ref ";
    cmd += getObjName();
    hw->sendCommand(cmd.c_str());
    return hw->recvRetCommandFinished();
}

uint32_t NexButton::Get_place_xcen(uint32_t *number)
{
    String cmd;
    cmd += "get ";
    cmd += getObjName();
    cmd += ".xcen";
    hw->sendCommand(cmd.c_str());
    return hw->recvRetNumber(number);
}

bool NexButton::Set_place_xcen(uint32_t number)
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

uint32_t NexButton::Get_place_ycen(uint32_t *number)
{
    String cmd;
    cmd += "get ";
    cmd += getObjName();
    cmd += ".ycen";
    hw->sendCommand(cmd.c_str());
    return hw->recvRetNumber(number);
}

bool NexButton::Set_place_ycen(uint32_t number)
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

uint32_t NexButton::getFont(uint32_t *number)
{
    String cmd;
    cmd += "get ";
    cmd += getObjName();
    cmd += ".font";
    hw->sendCommand(cmd.c_str());
    return hw->recvRetNumber(number);
}

bool NexButton::setFont(uint32_t number)
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

uint32_t NexButton::Get_background_cropi_picc(uint32_t *number)
{
    String cmd;
    cmd += "get ";
    cmd += getObjName();
    cmd += ".picc";
    hw->sendCommand(cmd.c_str());
    return hw->recvRetNumber(number);
}

bool NexButton::Set_background_crop_picc(uint32_t number)
{
    char buf[10] = {0};
    String cmd;

    utoa(number, buf, 10);
    cmd += getObjName();
    cmd += ".picc=";
    cmd += buf;
    hw->sendCommand(cmd.c_str());

    cmd = "";
    cmd += "ref ";
    cmd += getObjName();
    hw->sendCommand(cmd.c_str());
    return hw->recvRetCommandFinished();
}

uint32_t NexButton::Get_press_background_crop_picc2(uint32_t *number)
{
    String cmd;
    cmd += "get ";
    cmd += getObjName();
    cmd += ".picc2";
    hw->sendCommand(cmd.c_str());
    return hw->recvRetNumber(number);
}

bool NexButton::Set_press_background_crop_picc2(uint32_t number)
{
	char buf[10] = {0};
    String cmd;

    utoa(number, buf, 10);
    cmd += getObjName();
    cmd += ".picc2=";
    cmd += buf;
    hw->sendCommand(cmd.c_str());

    cmd = "";
    cmd += "ref ";
    cmd += getObjName();
    hw->sendCommand(cmd.c_str());
    return hw->recvRetCommandFinished();
}

uint32_t NexButton::Get_background_image_pic(uint32_t *number)
{
    String cmd;
    cmd += "get ";
    cmd += getObjName();
    cmd += ".pic";
    hw->sendCommand(cmd.c_str());
    return hw->recvRetNumber(number);
}

bool NexButton::Set_background_image_pic(uint32_t number)
{
    char buf[10] = {0};
    String cmd;

    utoa(number, buf, 10);
    cmd += getObjName();
    cmd += ".pic=";
    cmd += buf;
    hw->sendCommand(cmd.c_str());

    cmd = "";
    cmd += "ref ";
    cmd += getObjName();
    hw->sendCommand(cmd.c_str());
    return hw->recvRetCommandFinished();
}

uint32_t NexButton::Get_press_background_image_pic2(uint32_t *number)
{
    String cmd;
    cmd += "get ";
    cmd += getObjName();
    cmd += ".pic2";
    hw->sendCommand(cmd.c_str());
    return hw->recvRetNumber(number);
}

bool NexButton::Set_press_background_image_pic2(uint32_t number)
{
    char buf[10] = {0};
    String cmd;

    utoa(number, buf, 10);
    cmd += getObjName();
    cmd += ".pic2=";
    cmd += buf;
    hw->sendCommand(cmd.c_str());

    cmd = "";
    cmd += "ref ";
    cmd += getObjName();
    hw->sendCommand(cmd.c_str());
    return hw->recvRetCommandFinished();
}
