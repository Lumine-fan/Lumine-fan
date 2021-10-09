#pragma once
#include <Windows.h>

typedef VOID(TROJAN_PAYLOAD)(
	_In_ INT t,
	_In_ HDC hdcScreen
	);

extern
VOID
ExecutePayload(
	TROJAN_PAYLOAD payload,
	DWORD dwTime
);

extern TROJAN_PAYLOAD Payload1;