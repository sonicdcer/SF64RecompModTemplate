#include "modding.h"
#include "recomputils.h"
#include "recompconfig.h"

#include "context.h"

#define RECOMP_HOOK_RETURN(func) __attribute__((section(".recomp_hook_return." func)))

RECOMP_HOOK_RETURN("Display_Update") void Display_Update(void) {
    if ((gGameState != GSTATE_PLAY) || (gPlayState <= PLAY_INIT)) {
        return;
    }
    gBombCount[0] = 9;
    gLaserStrength[0] = 2;
}