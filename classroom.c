#include <stdio.h>

int main()
{
    // Check is a number is odd or even
    int num;
    scanf("%d", &num);
    if (num % 2 == 0)
    {
        printf("Even\n");
    }
    else
    {
        printf("Odd\n");
    }

    // Check if the character is vowel or consnant
    char ch;
    scanf("%c", &ch);
    if (ch == 'a' || ch == "e" || ch == "i" || ch == "o" || ch == "u")
    {
        printf("Vowel\n");
    }
    else
    {
        printf("Consonant\n");
    }

    // // Check the max of three numbers using if and else
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    int max = c;
    if (a > b && a > c)
    {
        max = a;
    }
    else if (b > c)
    {
        max = b;
    }
    printf("%d\n", max);

    // Leap year. Use nested if else
    int year;
    scanf("%d", &year);
    if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
    {
        printf("Leap Year\n");
    }
    else
    {
        printf("Not Leap year\n");
    }

    // Voting age
    int age;
    scanf("%d", &age);
    if (age >= 18)
    {
        printf("Votable\n");
    }
    else
    {
        printf("Not Votable\n");
    }

    // Calculate the sum of first 20 even numbers
    int sum;
    for (int i = 0; i <= 40; i += 2)
    {
        sum += i;
    }
    printf("%d", sum);

    // Factorial using a for loop
    int fact = 1, n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    printf("%d", fact);

    // Prime number using for loop
    int num;
    scanf("%d", &num);
    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            printf("Not Prime");
            return 0;
        }
    }
    printf("Prime");

    // Sum of digits of a number using while
    int num, sum;
    scanf("%d", &num);
    while (num != 0)
    {
        sum += num % 10;
        num /= 10;
    }
    printf("%d", sum);

    // Print first 15 odd numbers
    int sum = 0, i = 1;
    while (i < 31)
    {
        sum += i;
        i += 2;
    }
    printf("%d\n", sum);

    // Factorial using while
    int fact = 1, num;
    scanf("%d", &num);
    while (num != 1)
    {
        fact *= num;
        num -= 1;
    }
    printf("%d", fact);

    return 0;
}