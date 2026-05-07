#include <stdio.h>

int main() {
    int a = 10;
    int *ptr1 = &a;       // Pointer to a
    int **ptr2 = &ptr1;   // Double Pointer to ptr1

    printf("--- THE MEMORY CHAIN ---\n");

    //The variable 
    printf("Value of a: %d\n", a);
    printf("Address of a (&a): %p\n", (void*)&a);

    //The Single Pointer
    printf("Value of ptr1 (stores &a): %p\n", (void*)ptr1);
    printf("Address of ptr1 (&ptr1): %p\n", (void*)&ptr1);

    // The Double Pointer
    printf("Value of ptr2 (stores &ptr1): %p\n", (void*)ptr2);
    printf("Address of ptr2 (&ptr2): %p\n", (void*)&ptr2);

    printf("\n--- ACCESS CHECK ---\n");
    printf("Reach 'a' via ptr1 (*ptr1): %d\n", *ptr1);
    printf("Reach 'a' via ptr2 (**ptr2): %d\n", **ptr2);

    return 0;
}
