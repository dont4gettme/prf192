#include<stdio.h>
//bai tap tim ddo dai chuoi 
int main () {
	
	char str[1000];
	
	int l = 0;
	
	printf("input the string :");
	
	fgets (str, 1000, stdin);
	
	while (str[l] !='\0') {
		
		l++;
		
	}
	printf("do dai cua chuoi la : %d\n", l-1);
	
	return 0;
	
}
