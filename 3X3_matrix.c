#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
    int a[3][3];printf("1st matrix\n");
    for(i=1;i<=3;i++){
        for(j=1;j<=3;j++){scanf("%d",&a[i][j]);}
        printf("\n");
    }int b[3][3],k,l;printf("2nd matrix\n");
    for(k=1;k<=3;k++){
        for(l=1;l<=3;l++){scanf("%d",&a[k][l]);}
        printf("\n");
    }int c[3][3],m,n;
    c[3][3]=a[3][3]*b[3][3];
    printf("%d",c[3][3]);


    return 0;
}
