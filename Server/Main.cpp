#include "Common.h"
#include "ControlWindow.h"
#include "Server.h"


int CALLBACK WinMain(HINSTANCE hInstance,
	HINSTANCE hPrevInstance,
	LPSTR lpCmdLine,
	int nCmdShow)
{
	AllocConsole();

	freopen("CONIN$", "r", stdin);
	freopen("CONOUT$", "w", stdout);
	freopen("CONOUT$", "w", stderr);

	SetConsoleTitle(TEXT("Hidden Desktop"));

	wprintf(TEXT("Compiled: %S @ %S\n"), __DATE__, __TIME__);
	wprintf(TEXT("Reverse Hidden Desktop: \n\n"));

	//if(!StartServer(atoi(lpCmdLine)))
	if (!StartServer(6667))
	{
		wprintf(TEXT("Could not start the server (Error: %d)\n"), WSAGetLastError());
			getchar();
			return 0;
	}
	return 0;
}