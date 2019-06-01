#include<stdio.h>
#include<conio.h>
int main()
{
	int i=0;
	char str[100];
	printf("Enter a string : \n");
	gets(str);
	while(str[i]!='\0')
	{
		i++;
	}
	printf("\nLength of entered string is %d",i);
	getch();
	return 0;
}
