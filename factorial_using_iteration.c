#include <stdio.h>
#include <stdlib.h>

int main()
{
    int fac,n,i;
    printf("enter your number=");
    scanf("%d",&i);
    fac=1;
    for(n=1;n<=i;n++)
        fac=fac*n;
    printf("factorial of%d=%d",i,/fac);
    return 0;
}
