// C program to demonstrate
// working of relational operators
#include <stdio.h>

int main()
{
    int a = 10, b = 4;
  
  	printf("= as a Assignment operator\n");
  printf("Value of a is a = %d\n",a);
  printf("Value of b is a = %d\n",b);
printf("= as a Relational or Comparison operator\n");
    
    if (a == b)
        printf("a is equal to b\n");
    else
        printf("a and b are not equal\n");

    return 0;
}