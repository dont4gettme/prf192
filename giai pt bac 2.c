#include<stdio.h>
#include <math.h>
int main() {
	float a,b,c,delta,x1,x2;
	
	
	
	printf("enter the a , b , c :");
	
	 scanf("%f%f%f", &a, &b, &c);
	 
	 
	delta = b*b - (4*a*c);
	
	if(delta > 0) {
		
		x1 = (-b + sqrt(delta)) / 2*a;
		
		x2 = (-b + sqrt(delta)) / 2*a;
		
		 printf("Phuong trinh co hai nghiem phan biet:\n");
		 
        printf("x1 = %.2f\n", x1);
        printf("x2 = %.2f\n", x2);
		
	} else if ( delta = 0) {
		
		printf("Phuong trinh co nghiem kep:\n");
		printf("x1 = x2 = %.2f\n", x1);
		
	}
	else {
        printf("Phuong trinh vo nghiem trong tap so thuc.\n");
    }
    return 0;
	
	  
	  
	  
	  
	 
	  
	
}
