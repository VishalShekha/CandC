#include <stdio.h>

int main()
{
    // Declare a variable and initialize it
    int number = 42;

    // Declare a pointer and assign the address of the variable to it
    int *ptr = &number;

    // Access the value of the variable using the pointer
    printf("Value of the variable: %d\n", *ptr);

    // Modify the value of the variable using the pointer
    *ptr = 100;
    printf("New value of the variable: %d\n", number);

    // Declare an array
    int arr[] = {1, 2, 3, 4, 5};

    // Declare a pointer to the first element of the array
    int *arrPtr = arr;

    // Access array elements using pointer arithmetic
    printf("Array elements: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", *(arrPtr + i));
    }
    printf("\n");

    // Use pointers to swap two variables
    int a = 5, b = 10;
    printf("Before swapping: a = %d, b = %d\n", a, b);

    int temp = a;
    a = b;
    b = temp;

    printf("After swapping without pointers: a = %d, b = %d\n", a, b);

    // Now, let's swap using pointers
    int *aPtr = &a;
    int *bPtr = &b;

    // Swap values using pointers
    temp = *aPtr;
    *aPtr = *bPtr;
    *bPtr = temp;

    printf("After swapping with pointers: a = %d, b = %d\n", a, b);

    return 0;
}
