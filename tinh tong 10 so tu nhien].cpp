#include<stdio.h>
int main () {
	
	int n,sum =0;
	
	scanf("%d", &n);
	
	printf("10 so tu nhien dau tien la :\n");
	
	for (int i = 0; i<=n; i++) {
		
		sum +=i;
		
		printf(" %3d ", i);
		
	}
	
	printf("\ntong la :%d\n", sum);
	
	return 0;
	
}
