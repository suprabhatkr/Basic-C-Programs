#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
    int a[3][3];
    printf("1st matrix\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);}
        printf("\n");
    }
    int b[3][3],k,l;
    printf("2nd matrix\n");
    for(k=0;k<3;k++){
        for(l=0;l<3;l++){
            scanf("%d",&b[k][l]);}
        printf("\n");
    }
    int c[3][3],m,n;
    for(m=0;m<3;m++){
        for(n=0;n<3;n++){
            c[m][n]=(a[m][0]*b[0][n])+(a[m][1]*b[1][n])+(a[m][2]*b[2][n]);
        }
    }
    for(m=0;m<3;m++){
        for(n=0;n<3;n++){
            printf("%d  ",c[m][n] );
        }
        printf("\n");
    }
    return 0;
}

