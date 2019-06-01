#include<stdio.h>
int main()
{
	int i,j,k;
	float a[6],b[10][3],c[6][3];
	printf("Enter the elements of array a bw 1 to 9 : \n");
	for(i=0;i<6;i++)
	{
	scanf("%f",&a[i]);
	}
	printf("\nEnter the elements of array b : \n ");
	for(i=0;i<10;i++)
	{
		for(j=0;j<3;j++)
	   {   
		   	scanf("%f%*c",&b[i][j]);
		   printf("\t");
		   }
		   printf(" ");
	}
	for(i=0;i<6;i++)
	{ k=a[i];
		for(j=0;j<3;j++)
		{
			c[i][j]=b[k][j];
		}
	}
	printf("\nContents of array c are \n");
	for(i=0;i<6;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%f\t",c[i][j]);
		}
		printf("\n");
	}
	return 0;
	
}
