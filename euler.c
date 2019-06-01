#include<stdio.h>
float euler(int);
int main()
{
	int n;
	scanf("%d",&n);
	float e;
	e=euler(n);
	printf("e=%f",e);
}
float euler(int n)
{
	int i;
	if(n==1)
	return 1;
	else{
	float fac=1;
	float x;
	for(i=1;i<=n;i++)
	{fac=fac*i;}
	x=1/fac;
	return(1/fac +euler(n-1));
}
}
