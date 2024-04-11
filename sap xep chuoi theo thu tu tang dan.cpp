#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main () {
	
	char str[1000],ch;
	
	int i,j,l;
	
	printf("input the string :");
	
	fgets (str, 1000, stdin);
	
  l = strlen(str); //tinh do dai cua chuoi 
  
  
  for (i = 1; i < l; i++) {
     
         for (j = 0; j < l - i; j++) {
         	
         	if (str[j] > str[j +1]) {
         		
         		ch = str[j]; // hoan vi 
         		
         		str[j] = str[j +1];
         		
         		str[j + 1] = ch;
         		
			 }
         	
         	
		 }  
   
  }
  
  printf("%s\n\n", str);
	
	
	
}
