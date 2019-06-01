#include<stdio.h>
int fib(int);
int main()
{
	int a,sum;
	printf("number=");
	scanf("%d",&a);
	sum=fib(a);
	printf("fib=%d",sum);
}
int fib(int i)
{
	if(i==1)
	return 1;
	return(i+fib(i-1));
}
