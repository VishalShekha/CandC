#include <stdio.h>

int continueEX()
{
    for (int i = 1; i <= 8; i++)
    {
        // when i = 4, the iteration will be skipped and for
        // will not be printed
        if (i == 4)
        {
            continue;
        }
        printf("%d ", i);
    }
    printf("\n");

    // using break inside for loop to terminate after 2
    // iteration
    printf("break in for loop\n");
    for (int i = 1; i < 5; i++)
    {
        if (i == 3)
        {
            break;
        }
        else
        {
            printf("%d ", i);
        }
    }

    return 0;
}

int gotoloop()
{
    int n = 1;
label:
    printf("%d ", n);
    n++;
    if (n <= 10)
        goto label;
    return 0;
}

int main()
{

    int a = 10;
    double g = 10.0;
    int *at = &a; // *at holds addresses
    // printf("%p", &a); // &a is the pointer it returns address
    // printf("%p");

    // Dereferencing pointers
    printf("%p", *at); // It goes to the address and returns the value from the address

    // An example of implicit conversion

    int x = 10;   // integer x
    char y = 'a'; // character c

    // y implicitly converted to int. ASCII
    // value of 'a' is 97
    x = x + y;

    // x is implicitly converted to float
    float z = x + 1.0;

    printf("x = %d, z = %f", x, z);

    double x = 1.2;

    // Explicit conversion from double to int
    int sum = (int)x + 1;

    printf("sum = %d", sum);

    return 0;
}
