#include<stdio.h>

int main() {
	
	int n;
	
	
	printf("so luong dau vao : ");
	
	scanf("%d", &n);
	
	for (int i =0; i <n; i++) {
		
		
		
		printf("Number is : %d and cube of the %d is : %d\n", i,i, (i*i*i));
		
	}
	
	return 0;
	
}
