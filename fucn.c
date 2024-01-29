#include <stdio.h>

// Function prototype for helobolo
void helobolo(char name[], char heIS[], int fro);

// Function prototype for call by value
double cubeByValue(double num);

// Function prototype for call by reference
void cubeByReference(double *num);

int main()
{
    char name[] = "Vishal";
    char heIS[] = "Not gay";
    int fro = 100;

    // Call by value example
    printf("Call by value:\n");
    helobolo(name, heIS, fro);
    printf("\n");

    // Call by reference example
    printf("Call by reference:\n");
    double cubeResult = 100.0;
    cubeByReference(&cubeResult);
    helobolo(name, heIS, (int)cubeResult);

    return 0;
}

// Function to print a message using the given name, status, and years
void helobolo(char name[], char heIS[], int fro)
{
    printf("%s is %s for %d years\n", name, heIS, fro);
}

// Function to calculate the cube of a number using call by value
double cubeByValue(double num)
{
    return num * num * num;
}

// Function to calculate the cube of a number using call by reference
void cubeByReference(double *num)
{
    *num = cubeByValue(100);
}
