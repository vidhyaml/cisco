#include<stdio.h>
int fact(int n)
{
    if(n==0 || n==1)
    return 1;
    
    else
    return n*fact(n-1);
}
int main()
{
    int n,factorial;
    do {
        printf("Enter a positive number: ");
        scanf("%d", &n);
        if(n < 0)
            printf("Invalid input! Please enter a positive number.\n");
    } while(n < 0);
    factorial= fact(n);
    printf("Factorial of %d is %d",n,factorial);
}