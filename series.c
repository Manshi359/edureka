#include<stdio.h>
void main()
{
    int i,n;
    float sum=0.0;
    printf("enter the limit:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum+=(float)i/((float)i+1);
    }
    printf("the sum of the series n/(n+1),where n is %d is %f",n,sum);
}
