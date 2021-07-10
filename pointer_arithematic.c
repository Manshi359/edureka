#include<stdio.h>
int main()
{
    int a,b,sum,diff,multi;
    float div;
    int *p1,*p2;
    p1=&a;
    p2=&b;
    printf("enter two number:");
    scanf("%d %d",p1,p2);
    sum=*p1+*p2;
    diff=*p1-*p2;
    multi=(*p1)*(*p2);
    div=(float)*p1/(float)*p2;
    printf("the sum is %d",sum);
    printf("\n the difference is%d",diff);
    printf("\n the product is%d",multi);
    printf("\n the division id %f",div);
    return 0;
}
