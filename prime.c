#include<stdio.h>
#include<math.h>
void main()
{
    int n,i,j,flag;
    printf("enter the limit:");
    scanf("%d",&n);
    printf("\n prime numbers from 1 to %d are:",n);
    for(j=2;j<=n;j++)
    {
        flag=1;
        for(i=2;i<=j/2;i++)
        {
            if(j%i==0)
            {
                flag=0;
                break;
        }

        }
        if(flag==1)
            printf("\n%d",j);
    }
}
