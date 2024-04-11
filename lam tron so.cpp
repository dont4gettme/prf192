#include <stdio.h>
int main() {
double n;
scanf("%d", &n)
int rounded = (n - (int)n >= 0.5) ? (int)n + 1 : (int)n;
printf("The rounded up value of %lf is %d\n", n, rounded);
return 0;
}
