#include <stdio.h>

// Function that accepts addresses to modify original values
// In this we havent specified the n1 and n2 ** but it takes internally
void swap(int *n1, int *n2) {
    int temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}

int main() {
    int a = 5, b = 10;
    printf("--- Level 2: Pass-by-Reference ---\n");
    printf("Before: a = %d, b = %d\n", a, b);
// here we swap the adressing of the a and b 
    swap(&a, &b);
// after the swap the value be 
    printf("After:  a = %d, b = %d\n", a, b);
    return 0;
}
