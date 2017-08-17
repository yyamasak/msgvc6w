// msg.cpp : Defines the entry point for the application.
//

#include "stdafx.h"

int APIENTRY WinMain(HINSTANCE hInstance,
                     HINSTANCE hPrevInstance,
                     LPSTR     lpCmdLine,
                     int       nCmdShow)
{
 	WCHAR **argv;
	int argc;
	argv = (WCHAR**)CommandLineToArgvW(GetCommandLineW(), &argc);

	WCHAR* msg;
	WCHAR* cap;

	if (argc >= 3)
	{
		msg = argv[argc-2];
		cap = argv[argc-1];
	}
	else if (argc == 2)
	{
		msg = argv[1];
		cap = L"Message";
	}
	else
	{
		msg = L"msg.exe \"Message\" \"Title\"";
		cap = L"Help";
	}

	MessageBoxW(NULL, msg, cap, 0);

	ExitProcess(0);

	return 0;
}



