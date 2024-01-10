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

    // // Check if the character is vowel or consnant
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

    // // // Check the max of three numbers using if and else
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

    // // Voting age
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

    // // Factorial using a for loop
    int fact = 1, n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    printf("%d", fact);

    // // Prime number using for loop
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

    // // Sum of digits of a number using while
    int num, sum;
    scanf("%d", &num);
    while (num != 0)
    {
        sum += num % 10;
        num /= 10;
    }
    printf("%d", sum);

    // // Print first 15 odd numbers
    int sum = 0, i = 1;
    while (i < 31)
    {
        sum += i;
        i += 2;
    }
    printf("%d\n", sum);

    //     // Factorial using while
    int fact = 1, num;
    scanf("%d", &num);
    while (num != 1)
    {
        fact *= num;
        num -= 1;
    }
    printf("%d", fact);

    // reverse the number
    int num, rem, revnum = 0;
    scanf("%d", &num);
    do
    {
        rem = num % 10;
        revnum = (revnum * 10) + rem;
        num /= 10;
    } while (num > 0);
    printf("%d", revnum);

    // Palindrome Number Checker
    int num, rem, revnum = 0;
    scanf("%d", &num);
    int numd = num;
    do
    {
        revnum = (revnum * 10) + (num % 10);
        num /= 10;
    } while (num > 0);
    if (numd == revnum)
    {
        printf("Palindrome!");
        return 0;
    }
    printf("!Palindrome");

    // Prime numbers between 1 to 100
    int num = 1, temp;
    do
    {
        num++;
        for (int i = 2; i <= num / 2; i++)
        {
            if (num % i == 0)
            {
                temp = 1;
                break;
            }
        }
        if (temp != 1)
        {
            printf("%d\n", num);
        }
        temp = 0;
        // }while (num < 100);

        // Write a code to retrive Days of the week where 1 is Sunday , 2 is Monday and so on...

        int num;
        scanf("%d", &num);
        switch (num)
        {
        case 1:
            printf("Monday");
            break;
        case 2:
            printf("Tuesday");
            break;
        case 3:
            printf("Wednesday");
            break;
        case 4:
            printf("Thursday");
            break;
        case 5:
            printf("Friday");
            break;
        case 6:
            printf("Saturday");
            break;
        case 7:
            printf("Sunday");
            break;
        default:
            printf("Error : out of days")
        }

        // Numbers to Roman
        int num;
        scanf("%d", &num);
        switch (num)
        {
        case 1:
            printf("I");
            break;
        case 2:
            printf("II");
            break;
        case 3:
            printf("III");
            break;
        case 4:
            printf("IV");
            break;
        case 5:
            printf("V");
            break;
        case 6:
            printf("VI");
            break;
        case 7:
            printf("VII");
            break;
        case 8:
            printf("VIII");
            break;
        case 9:
            printf("IX");
            break;
        case 10:
            printf("X");
            break;
        default:
            printf("Developer error: Out of awakat")
        }

        // Number to ASCII Number
        char d;
        scanf("%c", d);
        printf("%d", d);

        // Basic Calculator
        int a, b;
        char opt;
        scanf("%d %d", &a, &b);
        scanf("%c", opt);

        switch (opt)
        {
        case '+':
            printf("\nSum is %d", a + b);
            break;
        case '-':
            printf("\nDifference is %d", a - b);
            break;
        case '*':
            printf("\nProduct is %d", a * b);
            break;
        case '/':
            printf("\nDivision is %d", a / b);
            break;
        default:
            printf("\nEnter a normal program.");
        }
        // Compile time intialization
        int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        int sum = 0;
        for (int i = 0; i <= 10; i++)
        {
            sum += a[i];
        }
        printf("%d", sum);

        // Runtime initialization
        int size;
        scanf("%d", &size);
        int sum = 0, a[size];
        for (int i = 0; i < size; i++)
        {
            scanf("%d", &a[i]);
            sum += a[i];
        }
        printf("%d", sum);

        // To calculate the average in an array
        int size;
        scanf("%d", &size);
        int sum = 0, a[size];
        for (int i = 0; i < size; i++)
        {
            scanf("%d", &a[i]);
            sum += a[i];
        }
        printf("%f", (float)sum / size);

        // Reverse the array
        int size;
        scanf("%d", &size);
        int a[size];
        for (int i = 0; i < size; i++)
        {
            scanf("%d", &a[i]);
        }
        int temp = 0;
        for (int i = 0; i < (size - 1) / 2; i++)
        {
            temp = a[i];
            a[i] = a[size - 1 - i];
            a[size - 1 - i] = temp;
        }
        for (int i = 0; i < size; i++)
        {
            printf("%d ", a[i]);
        }

        // Elementwise multiplication
        int ma[2][2], mb[2][2];
        printf("Enter the A :");
        scanf("%d %d %d %d", &ma[0][0], &ma[0][1], &ma[1][0], &ma[1][1]);
        printf("Enter the B :");
        scanf("%d %d %d %d", &mb[0][0], &mb[0][1], &mb[1][0], &mb[1][1]);
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                printf("%d\t", mb[i][j] * ma[i][j]);
            }
            printf("\n");
        }
        return 0;
    }