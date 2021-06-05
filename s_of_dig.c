#include<stdio.h>
#include<conio.h>
void main()
{
    long int num;
    int rem,sum=0;
    printf("enter  the number:");
    scanf("%d",&num);
    while(num!=0)
    {
        rem=num%10;
        sum+=rem;
        num/=10;
    }
    printf("the sum of the digits is %d",sum);
    getch();
}
