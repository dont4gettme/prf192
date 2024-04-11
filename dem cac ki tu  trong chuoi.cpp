#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int main () {
	
	
	char str[1000];
	
	int alp,digit, splch, i; //  khai bao cac bien cho bang chu cai , cac so, ky tu dac biet va phep lap 
	
	alp = digit = splch = i = 0; // khoi tao cac bo dem co gia tri = 0
	
	printf("input the string  : ");
	
	fgets (str, 1000, stdin);
	
	/* kiem tra dieu kien cua chuoi */
	
	while (str[i] != '\0')  {
		
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >=  'A' && str[i] <= 'Z')) {
			
			alp++; // tang chu cai neu dieu kien dung
			
		}  else if (str[i] >= '0' && str[i] <= '9') {
			digit++;
			
		} else  {
			
			splch++;
			
		}
		
		i++; // kiem tra ky tiep theo trong chuoi 
		
	}
	
	//display 
	
	printf("alphabets is strings is : %d\n", alp);
	
	printf("digit in string is : %d\n", digit);
	
	printf("special in string is : %d\n\n", splch);
	
 
 return 0;
	
	
}
