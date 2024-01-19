#include <stdio.h>
#include <stdlib.h> // abs()

void update(int *a, int *b)
{
    int sum = *a + *b;
    int diff = *a - *b;
    *b = abs(diff); // positive value MODULUS
    *a = sum;
}

int main()
{

    char ch;
    scanf("%c", &ch);
    printf("%c\n", ch);
    char s[100];
    scanf("%s", &s);
    printf("%s\n", s);
    char sent[100];

    // Getting a line as import
    scanf("\n");
    scanf("%[^\n]%*c", sent);

    printf("%s", sent);

    int a, b;
    float x, y;
    scanf("%d %d", &a, &b);
    scanf("%f %f", &x, &y);
    printf("%d %d\n", a + b, a - b);
    printf("%.1f %.1f", x + y, x - y); // formatting to one decimal point

    int a, b;
    int *pa = &a, *pb = &b;
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    char numStr[] = "12445";
    strrev(numStr);                 // Reverse the string
    int reversedNum = atoi(numStr); // Convert the reversed string back to an integer
    printf("%d", reversedNum);

    // We can find ascii values by using %d for a character variable in printf statement

    int num = 100;
    char str[20];
    sprintf(str, "%d", num); // Convert the integer to a string using sprintf

    return 0; // Tells the end of the code
}