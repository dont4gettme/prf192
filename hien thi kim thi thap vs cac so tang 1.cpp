#include<stdio.h>

int main () {
	
	int i,j, k, rows,t=1,spc;
	
	
	scanf("%d", &rows);
	
	spc = rows +3;
	
	for (i = 1; i < rows; i++) {
		
		for (k = spc; k >=1; k++) {
			
	      printf(" ");
		
		
	}
	
	for (j = 1; j <=i; j++) {
		
		printf("%d ", t++);
		
	}
	
	printf("\n");
	
	spc--;
	
	
	
	
   }

return 0;
}
