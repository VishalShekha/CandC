#include <stdio.h>
#include <math.h>

int binaryToDecimal(long long baseNumber, int base)
{
    int decimalNumber = 0, i = 0, remainder;
    while (baseNumber != 0)
    {
        remainder = baseNumber % 10;
        baseNumber /= 10;
        decimalNumber += remainder * pow(base, i);
        ++i;
    }
    return decimalNumber;
}

long long decimalToBinary(int decimalNumber, int base)
{
    long long baseNumber = 0;
    int remainder, i = 1;

    while (decimalNumber != 0)
    {
        remainder = decimalNumber % base;
        decimalNumber /= base;
        baseNumber += remainder * i;
        i *= 10;
    }

    return baseNumber;
}

int main()
{
    long long baseNumber;
    int decimalNumber;
    int base;

    printf("Enter a base: ");
    scanf("%d", &base);

    printf("Enter a base number: ");
    scanf("%lld", &baseNumber);
    printf("Decimal equivalent: %d\n", binaryToDecimal(baseNumber, base));

    printf("Enter a decimal number: ");
    scanf("%d", &decimalNumber);
    printf("Binary equivalent: %lld\n", decimalToBinary(decimalNumber, base));

    return 0;
}
