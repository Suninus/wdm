#include "global.h"
#include "entry.h"
#include "queue.h"
#include "monitor.h"
#include "rb_monitor.h"
#include "wdm.h"

// ----------------------------------------------------------

void
Init_wdm() {
    WDM_DEBUG("Registering WDM with Ruby!");

    mWDM = rb_define_module("WDM");

    wdm_rb_monitor_init();
}