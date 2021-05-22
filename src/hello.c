#include <minigui/common.h>
#include <minigui/minigui.h>
#include <minigui/gdi.h>
#include <minigui/window.h>

int MiniGUIMain(int argc, const char *argv[])
{
	MessageBox(HWND_DESKTOP, "Hello MiniGUI!", "Hello", MB_OK);
	return 0;
}
#include <minigui/dti.h>