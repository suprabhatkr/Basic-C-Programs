#include<stdio.h>
int main()
{
	int i=0,j=0;
	char a[15],b[15],c[30];
	printf("enter the first string");
	gets(a);
	printf("enter the second string");
	gets(b);
	while(a[i] != ' ')
	{
		c[i]=a[i];
		i++;
	}
	while(b[j]!=' ')
	{
		c[i]=b[j];
		i++;
		j++;
	}
	puts (c);
}
