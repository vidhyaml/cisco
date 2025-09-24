#include<stdio.h>
int main()
{
    int n,q,rem,rev=0;
    printf("Enter a number:");
    scanf("%d",&n);
    q=n;
    while(q!=0)
    {
        rem=q%10;
        rev= rev*10 + rem;
        q=q/10;
    }
    printf("Reversed number is %d",rev);
}