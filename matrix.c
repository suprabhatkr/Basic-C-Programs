#include <stdio.h>
#include <stdlib.h>

int main()
{
    //3*3 matrix
    int i,j,matrix[3][3];
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {printf("enter a(%d,%d)=",i+1,j+1);
            scanf("%d",&matrix[i][j]);
        }
    }printf("the given matrix is\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            printf("%d\t",matrix[i][j]);
        printf("\n");
    }
    return 0;
}
