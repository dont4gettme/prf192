#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main () {
	
	char str[1000];
	int i,l;
	
	printf("nhap chuoi :");
	
	fgets (str, 1000, stdin);
	
	
	
	printf("do dai cua chuoi la :%d ", strlen(str));
	
	return 0;
	
	
}
