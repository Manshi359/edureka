#include<stdio.h>
int main()
{
    float cel,feh;
    printf("\n enter the temperature in feh:");
    scanf("%f",&feh);
    cel=(feh-32)*5/9;
    printf("\ntemperature in centigrade:%f",cel);
    return 0;
}
