#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a;
    float i,x,sum,y;
    scanf("%f",&sum);
    for(i=1;i<500;i++)
    {scanf("%c",&a);
        if(a==43)
               {scanf("%f",&x);
                sum=sum+x;}
        else if(a==45)
        {scanf("%f",&x);
        sum=sum-x;
            }
            else if(a==42)
            {sum=sum-x;
                scanf("%f",&y);
                sum=sum*y;
            }else if(a==47){scanf("%f",&y);sum=sum/y;}
            else {printf("%f",sum);
            i=500;}
        }
    return 0;
}
