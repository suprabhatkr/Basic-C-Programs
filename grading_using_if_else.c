#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    float eng,math,sci,sst,it,total,percent;
    printf("enter the numbers");
    printf("english=");
    scanf("%f",&eng);
    printf("math=");
    scanf("%f",&math);
    printf("science=");
    scanf("%f",&sci);
    printf("social science=");
    scanf("%f",&sst);
    printf("information techonology=");
    scanf("%f",&it);
    total=eng+math+sci+sst+it;
    printf("maximum marks=500\nyour total marks=%f",total);
    percent=total*(100/500);
    if(0<=math,eng,sci,sst,it<=100)
    {
        if(0<=percent<=30)
            printf("you are fail");
        else if(30<percent<=45)
            printf("you are third division");
        else if(45<percent<=60)
            printf("you are second division");
        else
            printf("you are first division");
    }
    else
        printf("there is some error\neither your marks is not in range of 0-100\which is not possible\n or you have pressed some non letter value.");
    //fflush(stdin);
    main();
    return 0;
}
