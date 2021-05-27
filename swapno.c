
#include<stdio.h>
#include<conio.h>
    void swap(int,int);
    int main()
{
    int n1,n2;
    printf("\n enter the two  number:");
    scanf("%d%d",&n1,&n2);
    printf("before swapping:n1=%d,n2=%d",n1,n2);
    swap(n1,n2);
    getch();
    return 0;
}
    void swap(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("after swapping:n1=%d,n2=%d",a,b);
}
