#include<stdio.h>
sort();
int main()
{
	int a[10],i;
	for(i=0;i<10;i++)
	{
		printf("a(%d)=",i);
		scanf("%d",&a[i]);
	}
	sort(a);
}
sort(int a[10])
{
	int i,j;
	for(i=0;i<10;i++)
	{
		for(j=0;j<i;j++)
		{
			if(a[i]<a[j])
			{
				a[i]=a[i]+a[j];
				a[j]=a[i]-a[j];
				a[i]=a[i]-a[j];
			}
		}
	}
	for(i=0;i<10;i++)
	{
		printf("%d ",a[i]);
	}
}
