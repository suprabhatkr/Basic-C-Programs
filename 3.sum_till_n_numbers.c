#include <stdio.h>
#include <stdlib.h>

int main()
{   int i,n,sum=0;
    printf("enter the number till sum to find:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
    	sum=sum+i;
       } 
       printf("%d",sum);
    return 0;
}
