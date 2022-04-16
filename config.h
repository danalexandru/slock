/* user and group to drop privileges to */
static const char *user  = "";
static const char *group = "";

static const char *colorname[NUMCOLS] = {
	[INIT]      =   "#000000",     /* after initialization */
	[INPUT]     =   "#005577",   /* during input */
	[FAILED]    =   "#CC3333",   /* wrong password */
	[CAPS]      =   "#E7C547",         /* CapsLock on */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;
