#include "stdio.h"

void main (void)
{
	unsigned int a,b;
	unsigned int i;
	
	a = 0u;
	b = 0u;
	
	for(i=0u; i<100u; i++) {
		a = i+b;
		b = i+a;
	}
	
	printf("Hello World\n");
}