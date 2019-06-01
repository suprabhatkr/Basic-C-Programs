#include<stdio.h>
int main()
{
	int i=0,j=0;
	char a[15],b[15],c[30];
	printf("enter first string:");
	gets(a);
	printf("enter second string:");
	gets(b);
	while(a[i]!='\0')
	{
		c[i]=a[i];
		i++;
	}
	c[i]=' ';
	i++;
	while(b[j]!='\0')
	{
		c[i]=b[j];
		i++;
		j++;
	}
	printf("the resultant string is:");
	puts(c);
	return 0;
}

