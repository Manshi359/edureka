#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("Enter the first number:\n");
    scanf("%d",&a);
    printf("Enter the second number:\n");
    scanf("%d",&b);
    int *p=&a;
    int *q=&b;
    temp= *p;
    *p=*q;
    *q=temp;
    printf("The numbers after swapping:\n");
    printf("%d\n%d",a,b);
    return 0;
}
