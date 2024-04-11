#include<stdio.h>
int main () {
	
	int hour,min,s;
	
	printf("nhap so gio :");
	
	  scanf("%d ", &hour);
	  
	 printf("nhap so phut : ");
	 
	  scanf("%d ", &min);
	  
	   s= (hour * 60) + min;
	   
	 printf("output : %d", s);
	 
	 return 0;  
	   
	    
	
}
