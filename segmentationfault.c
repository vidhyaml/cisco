#include <stdio.h>

int main() {
    int *ptr = NULL;
    *ptr = 5;   // Segmentation fault!
    return 0;
}
