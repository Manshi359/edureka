#include<stdio.h>
int main()
{
    int i;
    struct student
    {
        char name[10];
        int roll_no;
        int maks;
        char sec[20];
        char dept[10];
        int total;;
        int fees;
    }stud[2];
    for(i=0;i<2;i++)
    {
    printf("\n ENTER %dst STUDENT DETAILS",i+1);
    printf("\n******************************");
    printf("\n Enter the name : ");
	scanf("%s", stud[i].name);
    printf("\n Enter the roll number : ");
	scanf("%d", &stud[i].roll_no);
	printf("\n Enter the fees : ");
	scanf("%d", &stud[i].fees);
    printf("\n Enter the section : ");
	scanf("%s", stud[i].sec);
	printf("\n Enter the department : ");
	scanf("%s", stud[i].dept);
	printf("\n Enter the total marks : ");
	scanf("%d", &stud[i].total);
    }
    if(stud[0].total>stud[1].total)
    {
        printf("\n STUDENT ONE HAS SCORED HIGHEST MARKS");
        printf("\n******************************");
        printf("\n STUDENT DETAILS");
        printf("\n******************************");
	 	printf("\n NAME = %s", stud[0].name);
        printf("\n ROLL No. = %d", stud[0].roll_no);
	 	printf("\n FEES = %d", stud[0].fees);
        printf("\n SECTION = %s", stud[0].sec);
        printf("\n DEPARTMENT = %s", stud[0].dept);
	 	printf("\n TOTAL MARKS = %d", stud[0].total);
    }
    else
    {
        printf("\n STUDENT TWO HAS SCORED HIGHEST MARKS");
        printf("\n******************************");
        printf("\n STUDENT DETAILS");
        printf("\n******************************");
	 	printf("\n NAME = %s", stud[1].name);
        printf("\n ROLL No. = %d", stud[1].roll_no);
	 	printf("\n FEES = %d", stud[1].fees);
        printf("\n SECTION = %s", stud[1].sec);
        printf("\n DEPARTMENT = %s", stud[1].dept);
	 	printf("\n TOTAL MARKS = %d", stud[1].total);
    }
    return 0;
}
