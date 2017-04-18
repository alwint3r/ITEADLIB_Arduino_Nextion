#include "NexVisibleObject.h"

NexVisibleObject::NexVisibleObject(NexHardware *hw, int pid, int cid, const char* name):
NexTouch(pid, cid, name), hw(hw) {

}

bool NexVisibleObject::show() {
    String cmd = "vis ";
    cmd += getObjName();
    cmd += ",1";
    hw->sendCommand(cmd.c_str());
    return hw->recvRetCommandFinished();
}

bool NexVisibleObject::hide() {
    String cmd = "vis ";
    cmd += getObjName();
    cmd += ",0";
    hw->sendCommand(cmd.c_str());
    return hw->recvRetCommandFinished();
}
