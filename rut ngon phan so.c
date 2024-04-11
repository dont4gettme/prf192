#include <stdio.h>
int UCLN(int a,int b){
	
    if (a%b!=0)
        return UCLN(b,a%b);
    else
        return b;
}
int main(){
    int t,m;
    printf(" enter numerator : ");
    scanf("%d",&t);
    
    printf("enter denominator : ");
     scanf("%d",&m);
    printf(" %d/%d = \n",t,m);
    int ucln = UCLN(t,m);
    t=t/ucln;
    m=m/ucln;
    if (m!=1)
    {
        if (m<0){
            m=m*-1;
            t=t*-1;
        }
        printf("  %d/%d",t,m);
    }
    else{
        printf(" %d",t);
    }
    return 0;
}
