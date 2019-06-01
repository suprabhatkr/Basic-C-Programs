#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,a[10],i;
    float sum=0,avg;
    printf("total numbers are:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("enter value no.%d:",i+1);
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }avg=sum/n;
    printf("\nsum is:%f\naverage is:%f",sum,avg);
    return 0;
}
