#include<stdio.h>

int main() {
	
	int n;
	
	int sum = 0;
	
	
	
	while (1) {
		
		printf("input the number :");
		
		scanf("%d", &n);
		
		if (n ==0) {
			
			break;
		}
		
		if(n > 0) {
			
			sum+= n;
			
		
		}
		
		
	}
	printf("sum : %d\n", sum);
	
	return 0;
}
