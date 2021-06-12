#include<stdio.h>
void main()
{
    int num,rev=0;
    printf("enter the number:");
    scanf("%d",&num);
    while(num!=0)
    {
        rev=(rev*10)+(num%10);
        num=num/10;
    }
    printf("reverse of the given number is %d",rev);
}
