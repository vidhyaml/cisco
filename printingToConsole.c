#include<stdio.h>
int main()
{
    
    char str[50]="You are beautiful";
    printf("Printf---->STAYING IN SAME LINE");
    printf("Hello World....");
    printf("%s",str);
    printf("\n"); 
    puts("Puts displays only strings");
    puts("Jumping to New line"); 
    fputs("Output using fputs",stdout);
}