static const char norm_fg[] = "#c4c0c6";
static const char norm_bg[] = "#0f0f0f";
static const char norm_border[] = "#89868a";

static const char sel_fg[] = "#c4c0c6";
static const char sel_bg[] = "#8E706B";
static const char sel_border[] = "#c4c0c6";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
};
