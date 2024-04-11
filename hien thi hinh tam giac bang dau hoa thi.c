#include<stdio.h> 

int main () {
	
	int i,j, rows, k =1;
	
	scanf("%d", &rows);
	
	for (i = 1; i <= rows; i++) // tao do dai tam giac
	   {
		
		for ( j = 1; j <= i; j++) // xet tung  vong lap de giam i
		
		printf("%d", k++);
		
		printf("\n");
	}
	
	return 0;
}
