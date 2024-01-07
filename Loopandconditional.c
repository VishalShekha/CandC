#include <stdio.h>

int ifstat()
{
    char sartak[] = "gay";

    if (sartak == "gay")
    {
        printf("Vishal is safe");
    }

    else if (1)
    {
        printf("Sartak is safe");
    }

    else
    {
        printf("Vishal is safe");
    }

    return 0;
}

int switchcase()
{
    int a = 100;
    int b = 89;
    switch (a / 10)
    {
    case 10:
        printf("Topper");
        break;
    case 8:
        printf("Next sem fad denge");
        break;
    default:
        break;
    }
}

int whileloop()
{
    int index = 1;
    while (index < 7)
    {
        printf("%d", index);
    }

    do // Runs the code once before checking the code
    {
        printf("%d", index);
    } while (index < 7);

    return 0;
}

int forloop()
{
    int a = 10;
    for (int i = 0; a == 10; i++) // in a for loop first and last statement are just statement the first statment is excuted once and the third after every loop
    // the middle one is the condition checker if that is true they excicute the code
    {
        printf("%d", i);
    }

    for (1; a == 10; 1) // in a for loop first and last statement are just statement the middle one is the condition checker if that is true they excicute the code
    {
        printf("%d", a);
        a++;
    }
}

int main()
{
    // ifstat();
    // switchcase();
    // whileloop();
    forloop();

    return 0;
}