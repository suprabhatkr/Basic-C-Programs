#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("a=");
    scanf("%d",&a);
    printf("b=");
    scanf("%d",&b);
    printf("\ninitial value before swapping\na=%d\nb=%d",a,b);
    c=a;
    a=b;
    b=c;
    printf("\nafter swapping the vaues are\na=%d\nb=%d",a,b);
    return 0;
}
