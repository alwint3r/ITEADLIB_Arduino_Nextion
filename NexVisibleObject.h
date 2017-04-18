#ifndef __NEXVISIBLEOBJECT_H__
#define __NEXVISIBLEOBJECT_H__

#include "NexHardware.h"
#include "NexTouch.h"

class NexVisibleObject : public NexTouch {
public:
    NexVisibleObject(NexHardware* hw, int pid, int cid, const char* name);
    bool show();
    bool hide();
protected:
    NexHardware* hw;
};

#endif
