#include "Window.h"

int CALLBACK WinMain(HINSTANCE hInst, HINSTANCE hPrevInst, LPSTR lpCmdLine, int nShowCmd)
{
	Window wnd(800, 300, "Donkey Fart Fox");

	MSG msg{ 0 };
	BOOL gResult;
	while ((gResult = ::GetMessageW(&msg, NULL, 0, 0)) > 0) {
		::TranslateMessage(&msg);
		::DispatchMessageW(&msg);
	}

	if (gResult == -1) {
		return -1;
	}

	return msg.wParam;
}