#include <stdio.h>
int time(int,int);
void main()
{
    int min,hr,res;
    printf("enter the value of time in hour \n");
    scanf("%d",&hr);
    printf("enter the value of time in min\n");
    scanf("%d",&min);
    res=time(hr,min);
    printf("\n minutes is %d" ,res);
}
int time(int H,int M)
    {
      float r;
      r=(H*60)+M;
      return r;
    }
