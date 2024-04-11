#include<stdio.h>

int main () {
	int n,s;
	 int const x = 51;
	 
	 
	scanf("%d", &n);
	
	if ( n > x) {
		
		s = (x - n)*3;
		
	}
	  else {
		
		s =  x - n;
	}
	
	printf("%d", s);
	
	
	
	
	
}