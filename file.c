#include <stdio.h>
int main()
{
    char str[100];
    FILE *fp;
    printf("enter Text : \n");
    fgets(str, 100, stdin);
    fp = fopen("BMSCE.txt", "w");
    if(fp == NULL)
    {
        printf("Can't open file");
        exit(1);
    }
    fputs(str, fp);

    printf("entered Text : \n");
    fp = fopen("BMSCE.txt", "r");
    if(fp == NULL)
    {
        printf("Can't open file");
        exit(1);
    }
    fgets(str, 100, fp);
    fputs(str, stdout);


}
