#include<stdio.h>
float cal_area(float radius);
int main()
{
    float area,radius;
    printf("\n enter the radius of circle:");
    scanf("%f",&radius);
    area=cal_area(radius);
    printf("\n area of circle is %f",area);
    return 0;
}
float cal_area (float radius)
{
    float area;
    area=(3.14*radius*radius);
    return area;
}
