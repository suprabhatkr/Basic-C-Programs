#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a;

    printf("enter your character\n");
    scanf("%c",&a);

    if(a>=65&&a<=92)
       a=1;
    if(a>=97&&a<=122)
        a=2;
    switch(a)
    {
        case 1:printf("this is upper case letter");
        break;
        case 2:printf("this is lower case letter");
        break;
        default:printf("some special character or number");
        break;
    }


    return 0;
}
