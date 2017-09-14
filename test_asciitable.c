#include "conio.h"
 
void main()
{
    unsigned int i;
    for (i = 1; i < 256; i ++) {
        cprintf("%c", (char)i);
    }
 
    for(;;); // loop forever, never ends
}
