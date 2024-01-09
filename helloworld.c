#include <stdio.h>

int main()
{
    char a[10];
    scanf("%d", &a);
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", a[i]);
    }
    return 0;
}