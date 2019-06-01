#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,r;
    printf("for rectangle\n");
    printf("length=");
    scanf("%f",&a);
    printf("breadth=");
    scanf("%f",&b);
    printf("area of rectangle=%f",a*b);
    printf("\nfor circle\n");
    printf("radius=");
    scanf("%f",&r);
    printf("area of circle=%f",3.14*r*r);


    return 0;
}
