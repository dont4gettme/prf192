#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int main () {
	
	int i,l;
	
	
	char str[100];
	
	printf("nhap chuoi :");
	
	fgets(str, sizeof str, stdin);
	
	
	l = strlen(str); // tinh toan do dai cua chuoi bang strlen
	
	printf("ki tu duoc dao nguoc la :\n");
	
	
	for(i = l - 1; i >= 0; i--) {
		
		printf("%c", str[i]);
		
		
	}
	
	printf("\n\n");
	
	
	return 0;
	
	
	

}