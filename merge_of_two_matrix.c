#include<stdio.h>
int main()
{
	int flag=0,c[3][6],i,j,k,l;
	int a[3][3] = {1,2,3,4,5,6,7,8,9};
	int b[3][3] = {12,14,5,8,65,7,8,45,2};
	for(i=0;i<3;i++){
		for(j=0;j<6;j++){
			if(j<3){c[i][j]=a[i][j];
			}
			else{flag=0;
				for(k=0;k<3;k++){
					for(l=0;l<3;l++){
						if(b[i][j-3]==a[k][l])
						{
						   c[i][j]=0;
						   flag=1;
						   break;
					}
					else c[i][j]=b[i][j-3];
				}
				if(flag==1)break;
			}
		}
	}}
	for(i=0;i<3;i++){
		for(j=0;j<6;j++){
			printf("%d   ",c[i][j]);
		}
		printf("\n");
	}
}
