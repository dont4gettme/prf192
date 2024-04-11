#include <stdio.h>
#include <math.h>

int main()
  {
	
long long n;


scanf("%lld", &n);

int sqr = sqrt(n);


if (sqr * sqr == n && n >=1) {
	
printf("YES");

} else {
printf("NO");
}
return 0;
}
