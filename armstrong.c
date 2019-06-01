#include <stdio.h>
#include <stdlib.h>

int main()
{
     int d,t;
    float a,b,c;
    printf("enter the number=");
    scanf("%d",&d);
    a=d/100;
    t=d%100;
    b=t/10;
    c=t%10;

            if (d==a*a*a+b*b*b+c*c*c&&a<=9&&b<=9&&c<=9)
       {

        printf("%d is armstrong number",d);}
        else{printf("%d is not armstrong number",d);}
    return 0;
}
