#include <reg51.h>

void delay(unsigned int time); 

void main() {
    unsigned char i;
    while (1) {
        for (i = 0; i < 8; i++) {
            P1 = ~(1 << i); 
            delay(500);     
        }

        for (i = 0; i < 8; i++) {
            P2 = ~(1 << i); 
            delay(500);     
        }
				if(P1 == 0)
					P2 == 1;
    }
}


void delay(unsigned int time) {
    unsigned int i, j;
    for (i = 0; i < time; i++) {
        for (j = 0; j < 120; j++);
    }
}