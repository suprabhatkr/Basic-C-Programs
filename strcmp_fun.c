#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int x;
	char a[20]="happy",b[20]="happy";
	x=strcmp(a,b);
	if(x==0)
	{
		cout<<"yes";
	}
}
