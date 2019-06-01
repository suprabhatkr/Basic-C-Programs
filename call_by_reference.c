#include<stdio.h>
int swap(int *a,int *b);
int main()
{
	int i,j;
	printf("enter your number1:");
	scanf("%d",&i);
	printf("enter your number2:");
	scanf("%d",&j);
	swap(&i,&j);
	printf("printf the swapped numbers are:%d,%d",i,j);
	return 0;
}
int swap(int *a,int *b)
{
	int t;
	t=*a;
	*a=*b;
	*b=t;
}
