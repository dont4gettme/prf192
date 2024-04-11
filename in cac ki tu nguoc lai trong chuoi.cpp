#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int main () {
	
	char str[1000];
	
	int i,l;
	
	printf("nhap chuoi ");
	
	fgets (str, 1000, stdin);
	
	l = strlen(str); // tinh toan do dai trong chuoi su dung ham strlen 
	
    printf("cac ki tu chuoi dao nguoc la :");
    
    for (i = l -1; i >=0; i--) {
    	
    	printf("%c ", str[i]);
    	
	}
return 0;
} 
