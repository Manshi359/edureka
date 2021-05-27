
#include<stdio.h>
#include<math.h>
    float cal_area(int,int,int);
    int main()
{
    int a,b,c,s;
    float area;
    printf("\n enter the three sides of triangle:");
    scanf("%d%d%d",&a,&b,&c);
    area=cal_area(a,b,c);
    printf("\n the area of triangle is %f",area);
    return 0;
}
    float cal_area(int a,int b,int c)
{
    float s,area;
    s=(float)(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    return s;
}
