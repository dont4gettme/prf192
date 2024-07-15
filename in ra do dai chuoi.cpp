#include<stdio.h>
#include<string.h>


int main () {
	
		char str[] ="Hoang";
		
		// nhap chuoi 
		
		printf("%s\n",str);
		
		int length = 0;
		
		length = strlen(str);
		
		// in ra man hinh
		
		printf("do dai cua chuoi la : %d", length);
		
		return 0;
		
}