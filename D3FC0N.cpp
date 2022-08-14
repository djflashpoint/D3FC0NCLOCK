#include <iostream>
#include <windows.h>
#include <time.h>
using namespace std;
int main()
{
	HWND console = GetConsoleWindow();
	RECT r;
	GetWindowRect(console, &r);
	MoveWindow(console, r.left, r.top, 1050, 400, TRUE);
	HANDLE hConsole;
	int k;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	while (true)
	{
		for (k = 1; k < 8; k++)
		{
			SetConsoleTextAttribute(hConsole, k);
			time_t now = time(NULL);
			std::cout << '\n' << R"(						)" << (ctime(&now)); //6 tabs
			std::cout << R"(
DDDDDDDDDDDDD       333333333333333   FFFFFFFFFFFFFFFFFFFFFF       CCCCCCCCCCCCC     000000000     NNNNNNNN        NNNNNNNN
D::::::::::::DDD   3:::::::::::::::33 F::::::::::::::::::::F    CCC::::::::::::C   00:::::::::00   N:::::::N       N::::::N
D:::::::::::::::DD 3::::::33333::::::3F::::::::::::::::::::F  CC:::::::::::::::C 00:::::::::::::00 N::::::::N      N::::::N
DDD:::::DDDDD:::::D3333333     3:::::3FF::::::FFFFFFFFF::::F C:::::CCCCCCCC::::C0:::::::000:::::::0N:::::::::N     N::::::N
  D:::::D    D:::::D           3:::::3  F:::::F       FFFFFFC:::::C       CCCCCC0::::::0   0::::::0N::::::::::N    N::::::N
  D:::::D     D:::::D          3:::::3  F:::::F            C:::::C              0:::::0     0:::::0N:::::::::::N   N::::::N
  D:::::D     D:::::D  33333333:::::3   F::::::FFFFFFFFFF  C:::::C              0:::::0     0:::::0N:::::::N::::N  N::::::N
  D:::::D     D:::::D  3:::::::::::3    F:::::::::::::::F  C:::::C              0:::::0 000 0:::::0N::::::N N::::N N::::::N
  D:::::D     D:::::D  33333333:::::3   F:::::::::::::::F  C:::::C              0:::::0 000 0:::::0N::::::N  N::::N:::::::N
  D:::::D     D:::::D          3:::::3  F::::::FFFFFFFFFF  C:::::C              0:::::0     0:::::0N::::::N   N:::::::::::N
  D:::::D     D:::::D          3:::::3  F:::::F            C:::::C              0:::::0     0:::::0N::::::N    N::::::::::N
  D:::::D    D:::::D           3:::::3  F:::::F             C:::::C       CCCCCC0::::::0   0::::::0N::::::N     N:::::::::N
DDD:::::DDDDD:::::D3333333     3:::::3FF:::::::FF            C:::::CCCCCCCC::::C0:::::::000:::::::0N::::::N      N::::::::N
D:::::::::::::::DD 3::::::33333::::::3F::::::::FF             CC:::::::::::::::C 00:::::::::::::00 N::::::N       N:::::::N
D::::::::::::DDD   3:::::::::::::::33 F::::::::FF               CCC::::::::::::C   00:::::::::00   N::::::N        N::::::N
DDDDDDDDDDDDD       333333333333333   FFFFFFFFFFF                  CCCCCCCCCCCCC     000000000     NNNNNNNN         NNNNNNN
)" << std::endl;
			Sleep(1000);
			system("cls");
		}
	}
}// 27 lines without the ascii content
