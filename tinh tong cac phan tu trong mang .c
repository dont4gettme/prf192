#include<stdio.h>

int main () {
	
	int n,i, sum =0;
	
	int arr[1000];
	
	printf("input the numbers :");
	
	  scanf("%d", &n);
	  
	  
	  

	  
	  for(i = 0; i < n; i++)
	   {
	  	
	  	 printf(" nhap %d trong mang \n", i);
	  	
	  	scanf("%d", &arr[i]);
	  	
	  	
	   }
	  
	  for (i = 0; i < n; i++) {
	  	
	  	sum +=i;
	  	
	     	
	  }
	  printf("tong tat ca  cac phan tu trong mang la : %d", sum);
	  
	  return 0;
	  
	 
	
}
