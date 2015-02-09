#include <stdio.h>

#include "rlutil.h"  // http://stackoverflow.com/questions/7876241/portable-text-based-console-manipulator
#ifdef _WIN32
	void resetColors() {setColor(7);}
#else
	inline void resetColors() {printf("\x1b[0m");}
#endif

int main (int argc, char const *argv[]) {

/*
	 0  BLACK - Black
	 1  BLUE - Blue
	 2  GREEN - Green
	 3  CYAN - Cyan
	 4  RED - Red
	 5  MAGENTA - Magenta / purple
	 6  BROWN - Brown / dark yellow
	 7  GREY - Grey / dark white
	 8  DARKGREY - Dark grey / light black
	 9  LIGHTBLUE - Light blue
	 10 LIGHTGREEN - Light green
	 11 LIGHTCYAN - Light cyan
	 12 LIGHTRED - Light red
	 13 LIGHTMAGENTA - Light magenta / light purple
	 14 YELLOW - Yellow (bright)
	 15 WHITE - White (bright)
 */
	int i;
//	cls();
	for(i=0; i<16; i++) {
		setColor(i);
		puts("color");
	}
	setColor(GREEN); puts("Zelena");
	setColor(LIGHTCYAN); puts("Cianova");
	resetColors();
	return 0;
}
