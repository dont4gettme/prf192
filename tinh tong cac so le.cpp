
#include<stdio.h>

int main() {
	
	int n,sum =0;
	
	printf("input the number of term :");
	
	scanf("%d", &n);
	
	printf("\n cac so le la :");
	
	for (int i=1; i <= n; i++) {
		
		printf("%d", (2*i)-1);
		
		sum+=(2*i)-1;
		
	}
	
	printf("\ntong cac so le toi da &d so hang : %d\n", sum);
	
	return 0;
	
}
