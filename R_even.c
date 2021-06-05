#include<stdio.h>
void main()
{
    int m,n,i;
    printf("enter the two numbers:");
    scanf("%d%d",&m,&n);
    if(m%2 !=0)
        m++;
        while(m<=n)
    {

            printf("the even numbers is %d",m);
            m+=2;
    }
    getch();

}
