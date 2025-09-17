#include <stdio.h>
#include <string.h>

int main() {
   int a,b;
   printf("Enter a and b values:");
   scanf("%d %d", &a, &b);
   printf("Before swapping....\n");
   printf("a=%d , b=%d",a,b);
   //Using XOR operation to swap
   a=a^b;
   b=a^b;
   a=a^b;
   printf("\nAfter swapping...\n");
   printf("a=%d , b=%d",a,b);

    return 0;
}
