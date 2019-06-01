#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("enter the year=");
    scanf("%d",&a);
    if(a%4==0&&a%100!=0||a%1000==0)
        printf("the year is leap year");
    else
        printf("the year is not leap year");
     printf("\nenter the year=");
    scanf("%d",&b);
    if(b%4==0&&b%100!=0||b%1000==0)
        printf("the year is leap year");
    else
        printf("the year is not leap year");
    return 0;
}
