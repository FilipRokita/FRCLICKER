//FRCLICKER
//Filip Rokita
//www.filiprokita.com

#include <iostream>
#include <Windows.h>

using namespace std;

char enable, disable;
int cps;

void menu()
{
	cout << "ENABLE: "; cin >> enable;
	cout << "DISABLE: "; cin >> disable;
	cout << "CPS: "; cin >> cps;
}

void autoclicker()
{
	bool autoclicker = false;
	while (true)
	{
		if (GetAsyncKeyState(enable))
		{
			autoclicker = true;
		}
		if (GetAsyncKeyState(disable))
		{
			autoclicker = false;
		}
		if (autoclicker == true)
		{
			mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
			mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
			Sleep(1000 / cps);
		}
	}
}

int main()
{
	system("title FRCLICKER - www.filiprokita.com");
	menu();
	autoclicker();
	return 0;
}