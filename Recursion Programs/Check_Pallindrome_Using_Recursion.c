#include<stdio.h>
#include<string.h>
int isPallindrome(char str[],int start, int end)
{
    if(start>=end)return 1;
    if(str[start]!=str[end]) return 0;
    return isPallindrome(str, start+1,end-1);
}
int main()
{
    char str[100];
    printf("Input a String:");
    scanf("%s",str);
    int len=strlen(str);
    if(isPallindrome(str, 0, len-1))
    {
        printf("%s is a Pallindrome.",str);
    }
    else{
        printf("%s is not a pallindrome.",str);
    }
}