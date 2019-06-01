#include <stdio.h>

int main()
{
    int p1,p2,p3,p4,p5,p6,p7,p8,p9,c1,c2,c3,c4,c5,c6,c7,c8,c9,g1,g2,g3,g4,g5,g6,g7,g8,g9,g,c;
    float cg;

    printf("ch101 point is\t");
    scanf("%d\n",&p1);
    printf("ch101 credit is\t");
    scanf("%d\n",&c1);
    printf("ch102 point is\t");
    scanf("%d\n",&p2);
    printf("ch102 credit is\t");
    scanf("%d\n",&c2);
    printf("ec101 point is\t");
    scanf("%d\n",&p3);
    printf("ec101 credit is\t");
    scanf("%d\n",&c3);
    printf("ec102 point is\t");
    scanf("%d\n",&p4);
    printf("ec102 credit is\t");
    scanf("%d\n",&c4);
    printf("hs102 point is\t");
    scanf("%d\n",&p5);
    printf("hs102 credit is\t");
    scanf("%d\n",&c5);
    printf("hs105 point is\t");
    scanf("%d\n",&p6);
    printf("hs105 credit is\t");
    scanf("%d\n",&c6);
    printf("me101 point is\t");
    scanf("%d\n",&p7);
    printf("me101 credit is\t");
    scanf("%d\n",&c7);
    printf("ma101 point is\t");
    scanf("%d\n",&p8);
    printf("ma101 credit is\t");
    scanf("%d\n",&c8);
    printf("ce101 point is\t");
    scanf("%d\n",&p9);
    printf("ce101 credit is\t");
    scanf("%d\n",&c9);
    g1=p1*c1;
    printf("%d",g1);
    printf("%d")
    g2=p2*c2;
    g3=p3*c3;
    g4=p4*c4;
    g5=p5*c5;
    g6=p6*c6;
    g7=p7*c7;
    g8=p8*c8;
    g9=p9*c9;
    g=g1+g2+g3+g4+g5+g6+g7+g8+g9;
    printf("total points are");
    printf("%d\n",g);
    c=c1+c2+c3+c4+c5+c6+c7+c8+c9;
    printf("total credits are");
    printf("%d\n",c);
    cg=g/c;
    printf("your cgpa is ");
    printf("%f",cg);
    return 0;
}
