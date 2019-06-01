#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
    int n;
    printf("enter the number the no. of rows:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if((j>n/2-i+2&&j<n/2+i&&i<=n/2)||(i>n/2&&j>i-n/2&&j<n-i+n/2+1))printf(" ");
            else printf("*");
        }printf("\n");
    }
    return 0;
}
