#include<stdio.h>

int main () {
	
	char str[1000];
	
	int i = 0;
	
	printf("nhap chuoi :");
	
	fgets (str,1000, stdin);
	
	// tinh chuoi 
	
	printf("\ncac ki tu cua chuoi la :\n");
	
	while (str[i] != '\0') {
		
		printf("%c  ", str[i]);
		
		
		
		i++;
		
	}
	
	printf("\n");
	
	return 0;
}
