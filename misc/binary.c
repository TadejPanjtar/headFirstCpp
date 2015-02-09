#include <stdio.h>
#include <stdlib.h>

const char* toBin(unsigned char b) {
	static char ret[9];
	unsigned char i;
	ret[8]=0;
	for(i=0; i<8; i++) 
		ret[7-i]=((b & (1<<i))==(1<<i))?'1':'0';
	return ret;
}

int main(int argc,char** argv) {
	int i, *dyn;
	unsigned char b1;

	scanf ("%d",&i);
	dyn = calloc(1000000, sizeof(int));
	if (dyn ==NULL) exit (1);
	b1=0x35;
	printf("binary of 0x%x is %s\n", b1, toBin(b1));
	b1 &= ~(1 << 2);
	printf("binary of 0x%x is %s\n", b1, toBin(b1));
	b1 |= (1 << 2);
	printf("binary of 0x%x is %s\n", b1, toBin(b1));
	scanf ("%d",&i);

	return 0;
}
