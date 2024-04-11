#include<stdio.h>

int main() {
	
	int n =1 ;
	
	 int tich =1;
	
	
	while ( n <= 5) {
		
		tich *=n;
		
	 printf("Current number: %d, Current product: %d\n", n, tich);
		
		n++;
		
		
	}
	
	
	return 0;
}
