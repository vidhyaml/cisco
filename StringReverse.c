#include<stdio.h>
void reverse_string(char str[100],int start,int end)
{
    if(start>=end)
        return;
    char temp;
    temp=str[start];
    str[start]=str[end];
    str[end]=temp;
    reverse_string(str,start+1,end-1);
}
int main()
{
    char str[100];
    printf("Enter a string:");
    scanf("%s",&str);
    int len=0;
    for(int i=0;i <str[i]!='\0';i++)
    {
        len++;
    }
    reverse_string(str,0,len-1);
    printf("Reverse String: %s", str);
}