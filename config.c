#include "wlpinyin.h"
#include "xkbcommon/xkbcommon-keysyms.h"

bool default_activation = false;

static xkb_keysym_t records[2];
bool im_toggle(struct xkb_state *xkb, xkb_keysym_t keysym, bool pressed) {
	records[1] = records[0];
	records[0] = keysym;
	return records[0] == XKB_KEY_Shift_L && records[1] == XKB_KEY_Shift_L;
}
