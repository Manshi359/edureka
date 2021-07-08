#include<stdio.h>
#include<conio.h>
void main()
{
    int a[10];
    int i,n,temp,large=-1111,small=1111,large_pos,small_pos;
    printf("\n enter the number of the element in the array:");
    scanf("%d,&n");
    printf("\n enter the elements of the array:");
    for(i=0;i<n;i++)
        scanf("\n%d",&a[i]);
    for(i=0;i<n;i++)
    {
        if(a[i]<small)
        {
            small=a[i];
            small_pos=i;
        }
        if(a[i]>large)
        {
            large=a[i];
            large_pos=i;
        }
        printf("\n the smallest number is  %dis in %d position",small,small_pos);
        printf("\n the largest number %d is the %d position",large,large_pos);
        temp=a[large_pos];
        a[large_pos]=a[small_pos];
        a[small_pos]=temp;
        printf("n the new array is:");
        for(i=0;i<n;i++)
            printf("\n[%d]=%d i=[i]");
    }
    return 0;
}
