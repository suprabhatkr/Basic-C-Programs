#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,s,i,j;
    int a[30][20];
    printf("enter the no. of students:");
    scanf("%d",&n);
    printf("enter the no. of subjects:");
    scanf("%d",&s);
    for(i=0;i<n;i++)
    {   
        printf("student%d\n",i);
        for(j=0;j<s;j++){printf("subject%d:",j);
            scanf("%d",&a[i][j]);
        }
    }
    float b[i],c[j];
    for(i=0;i<n;i++){b[i]=0;
        for(j=0;j<s;j++){
            b[i]=b[i]+a[i][j];
    }}
    for(j=0;j<s;j++){c[j]=0;
    for(i=0;i<n;i++){c[j]=c[j]+a[i][j];}
}
float sa[i],st[j];
printf("average marks\n");
for(i=0;i<n;i++){sa[i]=b[i]/s;
printf("student%d:%f;  ",i,sa[i]);}
printf("\n");
for(j=0;j<s;j++){st[j]=c[j]/n;
printf("subject%d:%f;  ",j,st[j]);}
    return 0;
}
