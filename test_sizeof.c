#include "conio.h"

void main()
{
	unsigned int s = 0;
	int i = 0;

	cprintf("6502-C Compiler. \r\nhttp://HelloACM.com\r\n");

	cprintf("Size Of int = %d\r\n", sizeof(int));
	cprintf("Size Of char = %d\r\n", sizeof(char));
	cprintf("Size Of float = %d\r\n", sizeof(float));
	cprintf("Size Of double = %d\r\n", sizeof(double));
	cprintf("Size Of short = %d\r\n", sizeof(short));

	for (i = 0; i <= 100; i ++) {
		s += i;
	}
	cprintf("Sum = %d\r\n", s);

	for(;;); // loop forever, never ends
}
