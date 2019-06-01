#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k,l,m,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=n/2;j>=i;j--)
            printf(" ");
            if(n%2==0){
        for(k=n/2+1;k<=i;k++)
            printf(" ");}
            else for(k=n/2+1;k<i;k++)
                printf(" ");
        printf("*");if(i<n/2+1)
       {
        for(l=2;l<=i;l++)
            printf(" *");}
        else for(m=n-1;m>=i;m--)
                printf(" *");
            printf("\n");
    }
    return 0;
}
