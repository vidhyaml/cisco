#include<stdio.h>
int main()
{
    int n,i, sum=1;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            sum+=i;
        }
    }
    if(sum==n)
    {
        printf("%d is a Perfect Number",n);
    }
    else{
        printf("%d is not a Perfect Number",n);
    }
}