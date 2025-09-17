// C program to dereference the void
// pointer to access the value

#include <stdio.h>

int main()
{
    int a = 10;
    void* ptr = &a;
    char c= 'A';
    
    printf("ptr points to integer value and it's value is : %d\n", *(int*)(ptr));
    ptr=&c;
    printf("ptr points to character and it's value is : %c", *(char*)ptr);
    return 0;
}