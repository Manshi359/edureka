#include<stdio.h>
void main()
{
    int num,i,flag=0;
    printf("enter a number:");
    scanf("%d,&num");
    for(i=2;i<=num/2;i++)
    {
        if(num%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
        printf("n%d is a composite number",num);
    if(num==1)
        printf("1 is neither a prime number nor composite number");
    else if(flag==0)
        printf("\n%d is a prime number",num);
}
