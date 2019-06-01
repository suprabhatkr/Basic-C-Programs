#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("enter the marks:\n");
    int marks[10],group[10]={0},i,j;
    printf("student\t\t\tmarks\n");
    for(i=0;i<10;i++)
    {printf("student no.%d\t\t",i+1);
        scanf("%d",&marks[i]);
        group[(marks[i])/10]=group[(marks[i])/10]+1;
    }printf("\ngroup of student   no.of students  stars\n");
    for(i=0;i<10;i++)
        {printf("%d-%d\t\t\t%d\t   ",10*i,10*(i+1),group[i]);
    for(j=group[i];j>0;j--)
        printf("*");
    printf("\n");}
    return 0;
}
