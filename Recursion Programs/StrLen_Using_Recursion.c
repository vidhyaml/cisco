#include<stdio.h>
int StringLength(char str[])
{
    if(str[0]=='\0'){
    return 0;
    }
    return 1 + StringLength(str+1); 
}
int main()
{
    char str[100];
    printf("Enter a string:");
    scanf("%s",str);
    int len=StringLength(str);
    printf("Length of the string is %d.",len);
    return 0;
}