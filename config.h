#include "colorschemes.h"

/* user and group to drop privileges to */
static const char *user  = "aldan";
static const char *group = "aldan";

static const char *colorname[NUMCOLS] = {
    [BACKGROUND] = CurrentColorScheme.Background,
	[INIT]       = CurrentColorScheme.Init,    /* after initialization */
	[INPUT]      = CurrentColorScheme.Input,    /* during input */
	[FAILED]     = CurrentColorScheme.Failed,    /* wrong password */
	[CAPS]       = CurrentColorScheme.CapsLook,    /* CapsLock on */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

static const int logosize = 75;
static const int logow = 12; /* Grid width and height for right center alignment*/
static const int logoh = 6;

static XRectangle rectangles[9] = {
    {0, 3, 1, 3},
    {1, 3, 2, 1},
    {0, 5, 8, 1},
    {3, 0, 1, 5},
    {5, 3, 1, 2},
    {7, 3, 1, 2},
    {8, 3, 4, 1},
    {9, 4, 1, 2},
    {11,4, 1, 2},
};

/*Enable blur*/
#define BLUR
/*Set blur radius*/
static const int blurRadius=5;
/*Enable Pixelation*/
//#define PIXELATION
/*Set pixelation radius*/
static const int pixelSize=0;