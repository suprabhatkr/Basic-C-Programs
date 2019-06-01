#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k=1,a,b;
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        for(b=1;b<=a-i;b++)
            printf(" ");
        for(j=0;j<=i;j++)
        {
            if(j==0||i==0)
                k=1;
            else k=k*(i-j+1)/j;
            printf("%2d",k);
        }
        printf("\n");
    }
    return 0;
}
