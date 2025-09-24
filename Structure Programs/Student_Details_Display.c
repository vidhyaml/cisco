#include<stdio.h>
int main()
{
    struct Student{
        char name[100];
        int roll;
        float marks;
    };
    struct Student S[3];//store 5 students details
    for(int i=0;i<3;i++)
    {
        printf("Enter the details of Student %d.",i+1);
        printf("\nName:");
        scanf("%s",S[i].name);
        printf("Roll No:");
        scanf("%d",& S[i].roll);
        printf("Marks:");
        scanf("%f",&S[i].marks);
    }
    printf("------Students Details-------\n");
    for(int i=0;i<3;i++)
    {
        printf("\nName:%s",S[i].name);
        printf("\nRoll Number:%d",S[i].roll);
        printf("\nMarks:%2.f",S[i].marks);
    }
    return 0;
}