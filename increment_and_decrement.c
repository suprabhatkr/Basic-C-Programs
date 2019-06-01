#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d,e;
    printf("input a=");
    scanf("%d",&a);
    a=a++;
    printf("output a=%d",a);
    printf("\ninput b=");
    scanf("%d",&b);
    b=++b;
    printf("output b=%d",b);
    printf("\ninput c=");
    scanf("%d",&c);
    c=c--;
    printf("output c=%d",c);
    printf("\ninput d=");
    scanf("%d",&d);
    d=--d;
    printf("output d=%d",d);
    printf("\ninput e=");
    scanf("%d",&e);
    e=(e++)+(--e)+(e++);
    printf("output e=%d",e);
    return 0;
}
