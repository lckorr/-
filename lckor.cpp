#include <iostream>
#include <windows.h>
#include <string>

using namespace std;
int main(void){
	int time= 0;

	for (int hour = 0; hour < 2; hour++) {
		for (int minute = 0; minute < 2;minute++) {
			for (int second = 0; second < 2;second++) {
				time++;
				cout << hour << ":" << minute << ":" << second << "ÃëÏëÄã" << time << "´Î" << endl;
				Sleep(1000);
			}
		}
	}

	system("pause");
	return 0;
}