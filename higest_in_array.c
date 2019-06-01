#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("total numbers are:");
    int n;
    scanf("%d",&n);
    int a[10],i;
    for(i=0;i<n;i++){
        printf("enter value%d:",i);
        scanf("%d",&a[i]);
    }int j,hig=a[n-1],k=n-1;
    for(i=0;i<n;i++){
        for(j=i-1;j>=0;j--){
            if(a[i]<a[j]&&a[j]>hig){hig=a[j];k=j;}
        }
    }printf("highest value is:%d\nits index value is:%d",hig,k);
    return 0;
}
