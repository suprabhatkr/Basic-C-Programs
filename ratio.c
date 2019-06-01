#include <stdio.h>
#include <stdlib.h>

int main()
{ float a,b,mul,dif,ratio;
printf("a=");
scanf("%f",&a);
printf("b=");
scanf("%f",&b);
mul=a*b;
dif=a-b;
if(a==b)
    printf("undefined solution");
    else
    ratio=mul/dif;
    printf("ratio(a*b)/(a-b)=%f",ratio);
    return 0;
}
