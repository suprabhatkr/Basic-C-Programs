#include<stdio.h>
int prime(int,int);
int main()
{
    int i,j;
    printf("enter the range of values:\n");
    scanf("%d%d",&i,&j);
    prime(i,j);
    return 0;
}
int prime(int a,int b)
{
    int x,y,ar[50],n=1;
    for(x=a;x<=b;x++)
    {
        for(y=2;y<x;y++)
        {
            if(x%y==0)
            break;
            else if(y==x-1)
            {
            ar[n]=x;
            n++;}
        }
    }printf("the prime numberrs are\n");
    for(x=1;x<n;x++)
    {
        printf("%d\t",ar[x]);
    }return 0;
}
