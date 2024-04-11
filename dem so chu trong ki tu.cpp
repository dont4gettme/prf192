#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main () {
	
	char str[1000];
	
	int i, wrd;
	
	printf("input the string :");
	
	//doc mot chuoi nhap tu ban phim 
	
	fgets (str, 1000, stdin);
	
	wrd = 1;
	i = 0;
	
	while (str[i] != '\0') {
		
		/*kiem tra ki tu hien tai la khoang trang hay dong moi hay ky tu tab  */
		
		if (str[i]== ' ' || str[i]== '\n' || str[i] =='\t') {
			
			wrd ++; // tang chu len
		}
		
		i++; // dem so chu trong ki tu
		
	}
	
	printf("tong so tu trong chuoi la : %d", wrd - 1);
	
	return 0;
	
}

