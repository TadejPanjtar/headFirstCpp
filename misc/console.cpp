// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <string>

#ifdef _WIN32
#include <conio.h> // _getch()
        inline int cGetChar() { return _getch();}
#else
#include <termios.h>
#include <stdio.h> // If echoing to the screen is not a problem, you could try using getchar() from stdio.h.
        inline int cGetChar()
{
    struct termios oldattr, newattr;
    int ch;
    tcgetattr( 0, &oldattr );
    newattr = oldattr;
    newattr.c_lflag &= ~( ICANON );
    tcsetattr( 0, TCSANOW, &newattr );
    ch = getchar();
    tcsetattr( 0, TCSANOW, &oldattr );
    return ch;
}
#endif


using namespace std;

int main(int argc, char* argv[])
{
	float i; // or int
	string s;
	cout << "Hello iostream, enter number:" << endl;
	cin >> i;
	
	// 1. variant
	cin.ignore();   // Put this right after cin >> choice, before you go on
                // getting input with getline.
	// 3e   <-- if you enter this or e4, works wrong like this
	// Enter Name: HI , U R no#: 0 


	// 2. variant
	// cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n'); // works only on windows, handles ok 3r as 3
	//discard characters until newline is found, so read only numerics


	cout << "Enter Name: ";
	//cin >> s; // ce prebiras ime tako, priimek spustis ker sta to dva vnosa
	getline (cin, s);
	cout << "HI " << s << ", U R no#: " << i << endl;
	//char c = _getch();
	//cout << c;
	cGetChar();
	return 0;
}

