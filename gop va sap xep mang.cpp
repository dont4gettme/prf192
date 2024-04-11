#include<stdio.h>

int main () {
	
	int arr1[100], arr2[100], arr3[100];
	
	int i,j,k,s1,s2,s3;
	
	
	printf("input the  element in array :", s1);
	
	scanf(" %d", s1);
	
	printf("input %d elements in the array : \n", s1);
	
	for (i = 0; i < s1; i++) {
		
		printf("element - %d :", i);
		
		scanf("%d", &arr1[i]);
		
	}
	
	printf("Input the num of element to be stored in the second array : %d");
	
	scanf(" %d", s2);
	
	printf("input %d element in the array :\n", s2);
	
	for ( j = 0; j < s2; j++) {
		
		printf("element - %d :", i);
		
		scanf("%d", &arr2[i]);
		
	}
	
	/* gop mang */
	
	s3 = s1 + s2;
	
	/* insert in the array */
	 
	 for (i = 0; i < s1; i++) {
	 	
	 	arr3[i] == arr2[i];
	 	
	 }
	 
	 for (j = 0; i <s2; j++) {
	 	
	 	arr3[i] = arr2[i];
	 	
	 	i++;
	 }
	  
	  /* sap xep mang theo thu tu giam dan */
	  
	   for (i = 0; i < s3; i++) {
	   	
	   	  for (k = 0; k < s3-1; k++) {
	   	  	
	   	  	if ( arr3[i] < arr3[k+1])
	   	  	   {
	   	  	   	  j = arr3[k+1];
	   	  	   	  
	   	  	   	  arr3[k+1]=arr3[k];
	   	  	   	  
	   	  	   	  arr3[k]=j;
	   	  	   	  
	   	  	   	
				}
			 }
	   }
	   
	   /* xuat mang da sap xep */
	   
	   for( i = 0; i <s3; i++) {
	   	
	   	printf("%d ", arr3[i]); 
	   	
	   	
	   }
	   
	   return 0;
	  
	  
}
