#include <iostream>
#include "switch.h"
using namespace std;

int main()
{
	consoleInit(NULL);
	cout << "Hello World!\nBy Stephen Wallace";

	while (appletMainLoop())
	{
		hidScanInput();
		u64 kdown = hidKeysDown(CONTROLLER_P1_AUTO);
		if (kdown & KEY_PLUS)
			break;
		consoleUpdate(NULL);
	}
	consoleExit(NULL);
	return 0;
}