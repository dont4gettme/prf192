#include <stdio.h>

double roundNumber(double num, int decimal_places) {
    double multiplier = 1;
    int i;

    
    for (i = 0; i < decimal_places; ++i) {
        multiplier *= 10;
    }

    // Làm tròn b?ng cách thêm 0.5 và chuy?n v? s? nguyên
    double rounded = num * multiplier + 0.5;

   
    int rounded_int = (int)rounded;

    
    return (double)rounded_int / multiplier;
}

int main() {
    double num = 3.14159;
    int decimal_places = 2; 

    double rounded_num = roundNumber(num, decimal_places);

    printf("Sau khi lam tron: %.2lf\n", rounded_num); 
    return 0;
}
