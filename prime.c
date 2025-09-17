#include<stdio.h>
#include<math.h>
int check_prime(int n)
{
    int isprime=1;
    if(n<=1)
        isprime=0;
    else{
        for(int i=2;i<=sqrt(n);i++)
        {
            if(n%i==0)
            {
                isprime=0;
                break;
            }
        }
    }
    return isprime;
}
int main()
{
    int n,isprime;
    do {
        printf("Enter a positive number: ");
        scanf("%d", &n);

        if(n <= 0)
            printf("Invalid input! Please enter a positive number.\n");
    } while(n <= 0);
    
    isprime = check_prime(n);
    if(isprime)
    {
        printf("%d is a Prime number",n);
    }
    else{
        printf("%d is not a Prime Number",n);
    }
}