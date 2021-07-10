#include<stdio.h>
int main()
{
    struct bookd
    {
        char bt[50];
        char at[20];
        int pr;
        int no;
        char dt[10];
    }bookd1, bookd2, bookd3;
    printf("Enter the book title of book 1:\n");
    scanf("%s",bookd1.bt);
    printf("Enter the name of the author of book 1:\n");
    scanf("%s",bookd1.at);
    printf("Enter the price of book 1:\n");
    scanf("%d",&bookd1.pr);
    printf("Enter the number of pages of book 1:\n");
    scanf("%d",&bookd1.no);
    printf("Enter the date of publication of book 1 (date/month/year):\n");
    scanf("%s",bookd1.dt);
     printf("Enter the book title of book 2:\n");
    scanf("%s",bookd2.bt);
    printf("Enter the name of the author of book 2:\n");
    scanf("%s",bookd2.at);
    printf("Enter the price of book 2:\n");
    scanf("%d",&bookd2.pr);
    printf("Enter the number of pages of book 2:\n");
    scanf("%d",&bookd2.no);
    printf("Enter the date of publication of book 2 (date/month/year):\n");
    scanf("%s",bookd2.dt);
     printf("Enter the book title of book 3:\n");
    scanf("%s",bookd3.bt);
    printf("Enter the name of the author of book 3:\n");
    scanf("%s",bookd3.at);
    printf("Enter the price of book 3:\n");
    scanf("%d",&bookd3.pr);
    printf("Enter the number of pages of book 3:\n");
    scanf("%d",&bookd3.no);
    printf("Enter the date of publication of book 3 (date/month/year):\n");
    scanf("%s",bookd3.dt);
    printf("Book Title: %s\n",bookd1.bt);
    printf("Author: %s\n", bookd1.at);
    printf("Price: %d\n", bookd1.pr);
    printf("Number of pages: %d\n",bookd1.no);
    printf("Date of publication: %s\n\n",bookd1.dt);
     printf("Book Title: %s\n",bookd2.bt);
    printf("Author: %s\n", bookd2.at);
    printf("Price: %d\n", bookd2.pr);
    printf("Number of pages: %d\n",bookd2.no);
    printf("Date of publication: %s\n\n",bookd2.dt);
     printf("Book Title: %s\n",bookd3.bt);
    printf("Author: %s\n", bookd3.at);
    printf("Price: %d\n", bookd3.pr);
    printf("Number of pages: %d\n",bookd3.no);
    printf("Date of publication: %s\n\n",bookd3.dt);
    int temp,hg;
    temp= (bookd1.pr>bookd2.pr&&bookd1.pr>bookd3.pr)?bookd1.pr:bookd2.pr;
    hg= (bookd3.pr>temp)?bookd3.pr:temp;
    printf("Highest price - %d",hg);
    return 0;
}
