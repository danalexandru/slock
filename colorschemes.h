/************************************/
/**     COLORSCHEME COMPONENTS      */
/************************************/
#define SIZE_STRING 8

typedef struct {
    char Background[SIZE_STRING];
    char Init[SIZE_STRING];
    char Input[SIZE_STRING];
    char Failed[SIZE_STRING];
    char CapsLook[SIZE_STRING];
} ColorScheme;



/************************************/
/**         COLORSCHEMES            */
/************************************/
const ColorScheme Default = {
    .Background =   "#2D2D2D",
	.Init       =   "#FFFFFF",   /* after initialization */
	.Input      =   "#005577",   /* during input */
	.Failed     =   "#CC3333",   /* wrong password */
	.CapsLook   =   "#E7C547",   /* CapsLock on */
};

const ColorScheme DoomOne = {
    .Background =   "#14191F",
	.Init       =   "#bbc2cf",   /* after initialization */
	.Input      =   "#51afef",   /* during input */
	.Failed     =   "#ff6c6b",   /* wrong password */
	.CapsLook   =   "#ECBE7B",   /* CapsLock on */
};

const ColorScheme Gruvbox = {
    .Background =   "#282828",
	.Init       =   "#ebdbb2",   /* after initialization */
	.Input      =   "#458588",   /* during input */
	.Failed     =   "#fb4934",   /* wrong password */
	.CapsLook   =   "#fabd2f",   /* CapsLock on */
};

const ColorScheme Ayu = {
    .Background =   "#0A0B11",
	.Init       =   "#F3F3F6",   /* after initialization */
	.Input      =   "#36A3D9",   /* during input */
	.Failed     =   "#FF3333",   /* wrong password */
	.CapsLook   =   "#E7C547",   /* CapsLock on */
};

/************************************/
/**      CURRENT COLORSCHEME        */
/************************************/
const ColorScheme CurrentColorScheme = Gruvbox;

