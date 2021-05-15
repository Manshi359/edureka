#include <stdio.h>
#include <math.h>


int main()
{
    float a,b,c,area,S;
    printf("\n enter the sides of the triangle:");
    scanf("%f%f%f",&a,&b,&c);
    S=(a+b+c)/2;
    area=sqrt(S*(S-a)*(S-b)*(S-c));
    printf("Area of the triangle is %2f\n",area);
    return 0;
}
