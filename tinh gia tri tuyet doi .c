#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float a,b;
	
	scanf("%f%f", &a, &b);
	
	if ( a < 1000000 && b < 1000000) {
	    
	    printf("%f", fabs(a-b));
	}
	return 0;
}
