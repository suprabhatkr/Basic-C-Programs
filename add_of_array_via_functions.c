#include<stdio.h>
void input(int [][10],int,int);
void print(int [][10],int,int);
void add(int [][10],int [][10],int[][10],int,int);
int main()
{
     int i,j,n,n1,n2,a[10][10],b[10][10],c[10][10];
	 printf("Enter the size of matrix A : ");
	scanf("%d %d",&n1,&n2);
	printf("Enter the elements of matrix A : \n");
	input(a,n1,n2);
	printf("Enter the elements of matrix B : \n");
	input(b,n1,n2);
    add(a,b,c,n1,n2);
	printf("\nElements of the manipulated matrix is \n");
	print(c,n1,n2);
	return 0;
	
}
void input(int a[][10],int n1,int n2)
{
	for(int i=0;i<n1;i++)
	{
		for(int j=0;j<n2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
}
void print(int a[][10],int n1,int n2)
{
	for(int i=0;i<n1;i++)
	{
		for(int j=0;j<n2;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
}
void add(int a[][10],int b[][10],int c[][10],int n1,int n2)
{
	for(int i=0;i<n1;i++)
	{
		for( int j=0;j<n2;j++)
		{ if(i!=j)
			c[i][j]=a[i][j]+b[i][j];
			else
			c[i][j]=a[i][j]*b[i][j];
		}
	}
}
	
