#include <stdio.h>

void helobolo(char name[], char heIS[], int fro)
{
    printf("%s is %s for a %d years", name, heIS, fro);
}

double cube(int num); // this is called intiallizing

int main()
{
    // Program code here

    helobolo("Vishal", "Not gay", cube(100));

    return 0; // Indicate successful completion
}

double cube(int num)
{
    return num * num * num;
    // whatever code you write here is useless cause it breaks out of the function after return
}