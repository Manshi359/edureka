#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    float a,b,c,r1,r2,temp;
    printf("\n enter the three numbers:");
    scanf("%f%f%f",&a,&b,&c);
    temp=b*b-(4*a*c);
    if(temp>0)
    {
        r1=(-b+sqrt(temp))/(2*a);
        r2=(-b-sqrt(temp))/(2*a);
        printf("r1 is %f and r2 is %f",r1,r2);
    }
    else if(temp==0)
    {
        r1=r2=-b/(2*a);
        printf("r1=r2=%f",r1);
    }
    else if(temp<0)
    {
        temp=abs(temp);
        printf("the first imaginary number is%f+i%f",-b*(2*a),sqrt(temp))/(2*a);
        printf("the second imaginary number is %f-i%f",-b*(2*a),sqrt(temp))/(2*a);
    }

    return 0;
}
