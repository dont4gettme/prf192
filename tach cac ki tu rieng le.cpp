#include<stdio.h>

int main () {
	
	char str[100];
	
	int i = 0;
	
	
	// doc chuoi tieu chuan 
	
	fgets(str,  sizeof str, stdin);
	
	
	while(str[i] != '\0') {
		
			printf("%c ", str[i]);
			
			i++;
			
			
			
			
	}
	
	return 0;
	
}