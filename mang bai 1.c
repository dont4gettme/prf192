#include<stdio.h>

int main () {
	
	int a[10];
	
	int i;
	
	printf("input :");
	
	for(i =0; i <10; i++) {
		
		printf("a[%d]\n", i);
		
		scanf("%d", &a[i]);
		
	}
	
	for ( i = 0; i < 10; i++) {
		
		printf("%d", a[i]);
	}
	return 0;
}
