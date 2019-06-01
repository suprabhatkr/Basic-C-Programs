#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("AND and OR operator\nenter the value\na=");
    scanf("%d",&a);
    printf("b=");
    scanf("%d",&b);
    printf("output AND=%d\noutput OR=%d",a&&b,a||b);
    printf("\nbitwise\nenter the values\na=");
    scanf("%d",&a);
    printf("b=");
    scanf("%d",&b);
    printf("bitwise output AND = %d\nbitwise OR=%d",a&b,a|b);
    return 0;
}
