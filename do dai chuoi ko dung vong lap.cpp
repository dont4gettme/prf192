#include<stdio.h>
int main () {
	
	
	char str[100];
	
	int i = 0; // bien dem 
	
	printf("input the string :");
	
	
	// doc 1 chuoi tieu chuan = fgets
	
	fgets(str,  sizeof str, stdin);
	
	// dem khi nao toi khoang trang '\o'
	
	while(str[i] != '\0') {
		
		i++;
		
	}
	
	printf("do dai chuoi la : %d \n\n", i - 1);
	
	return 0;
	
}