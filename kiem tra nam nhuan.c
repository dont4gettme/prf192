#include<stdio.h>
int main() {
	
	int n;
	
	printf("nhap so nam :");
	
	 scanf("%d", &n);
	   
	   if (n % 400 ==0)
	   
	    printf("%d la nam nhuan", n);
	    
	      if(n % 4 == 0 && n % 100 !=0) 
	   
	      printf ("%d la nam nhuan", n);
	    
		else {
			
			printf("%d khong la nam nhuan", n);
		}   
		
		return 0;
	   
}
