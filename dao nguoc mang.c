#include<stdio.h>

int main() {
	
	int n,i;
	int a[1000];
	
	printf("input the number of elements to store in the array :");
	
	
	scanf("%d", &n);
	
	 printf("Nhap %d so phan tu trong mang :\n",n);
	
	 
	 
	for (i = 0; i < n; i++) {
		
		 printf("nhap - %d : ", i);
		
		scanf("%d", &a[i]);
		
		
	}
	
	printf("\nThe values stored in the array are : \n");
	
	
	for(i = 0; i < n; i++) {
		
		printf(" %  5d ", a[i]);
	}
	printf("\n\nThe values stored in the array in reverse are  \n");
	for (i = n -1; i >=0; i--) {
		
		printf("%  5d", a[i]);
	}
	printf("\n\n");
	
	
	return 0;
}
