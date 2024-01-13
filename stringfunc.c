#include <stdio.h>
#include <string.h>

int main()
{
    // char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    // printf("%d", strlen(alphabet)); // String length

    // char naum[10] = "Vish";

    // printf("%d", strlen(naum));
    // printf("%d", sizeof(naum)); // sizeof to get the size of a string/array

    // char str1[20] = "Hello ";
    // char str2[] = "World!";

    // // Concatenate str2 to str1 (result is stored in str1)
    // strcat(str1, str2);
    // printf("%s", str1);

    // // Copy str1 to str2
    // strcpy(str2, str1);
    // printf("%s", str2);

    char str1[] = "Hello";
    char str2[] = "Hello";
    char str3[] = "Hi";

    // Compare str1 and str2, and print the result
    printf("%d\n", strcmp(str1, str2)); // Returns 0 (the strings are equal)

    // Compare str1 and str3, and print the result
    printf("%d\n", strcmp(str1, str3)); // Returns -4 (the strings are not equal)
}