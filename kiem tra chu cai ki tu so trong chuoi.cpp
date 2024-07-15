#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main () {
	
	char str[100];
	
	int alp,num,kitu,i;
	
	
	alp = num = kitu =i = 0;
	
	
	
	
	printf("nhap chuoi :");
	
	
	fgets (str, sizeof str, stdin);
	
	while (str[i] != '\0') {
		
		if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
		
		     alp++;
		     
		} else if (str[i] >= '0' && str[i] <= '9') {
			
			num++;
			
			
		}  else {
			
			kitu++;
			
		}
		i++; //Move to the next character in the string
	}
	
	printf("so chu cai trong chuoi la : %d\n", alp);
	
	printf("so chu so trong chuoi la : %d\n", num);
	
	printf("so ki tu trong chuoi la : %d", kitu);
	
	printf("\n\n");
	
}