#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int x1,x2,y1,y2;
    float distance;
    printf("\n enter the x and y co-ordinates of first point:");
    scanf ("%d%d",&x1,&y1);
    printf("\n enter the x and y co-ordinates of the second point :");
    scanf ("%d%d",&x2,&y2);
    distance=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    printf("\n the distance between two points:%f",distance);
    return 0;

}


