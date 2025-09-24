#include<stdio.h>
struct Employee{
        char Name[100];
        int Roll_No;
        long Salary;
    };
int main()
{
    int n;
    
    printf("Enter the number of Employees:");
    scanf("%d",&n);
    struct Employee Emp[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter the details of Employee %d.",i+1);
        printf("\nName:");
        scanf("%s",Emp[i].Name);
        printf("ROll Number:");
        scanf("%d", &Emp[i].Roll_No);
        printf("Salary:");
        scanf("%lu",&Emp[i].Salary);
    }
    int index=0;
    printf("\n-----EMPLOYEE DETAILS DISPLAY--------");
    for(int i=0;i<n;i++)
    {
        printf("\nName: %s",Emp[i].Name);
        printf("\nRoll Number: %d",Emp[i].Roll_No);
        printf("\nSalary: %lu",Emp[i].Salary);
    }
    printf("\nEmployee with Highest salary is......");
    for(int i=1;i<n;i++)
    {
        if(Emp[i].Salary>Emp[index].Salary)
        {
            index=i;
        }
        printf("\nName: %s ", Emp[index].Name);
        printf("\nRoll Number: %d",Emp[index].Roll_No);
        printf("\nSalary: %lu",Emp[index].Salary);
    }
    return 0;
}