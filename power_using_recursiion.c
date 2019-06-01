#include<stdio.h>
int pow(int,int);
int main()
{
	int i,j;
	printf("base=");
	scanf("%d",&i);
	printf("index=");
	scanf("%d",&j);
    printf("%d",fib(i,j));
	return 0;
}
int pow(int x,int n)
{
	if(n==0)
	return 1;
	else
	{
		return(x*pow(x,n-1));
	}
}
