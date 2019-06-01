#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[50];
    int i,k;
    printf("Enter your name:\n");
    for(i=0;i<50;i++)
        {scanf("%c",&a[i]);
        if((a[i]<65||a[i]>122)&&a[i]!=' '){
        k=i;
        i=50;}}
    	for(i=0;i<=k;i++){
            printf("%c\n",a[i]);
    }
    printf("size of array=%d",k);
    return 0;
}
