#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    float c,d;
    printf("priciple=");
    scanf("%d",&a);
    printf("time in years=");
    scanf("%d",&b);
    printf("rate of intrest=");
    scanf("%f",&c);
    d=a*b*c/100;
    printf("simple intrest is\t");
    printf("%f",d);
    return 0;
}
