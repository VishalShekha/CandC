#include <stdio.h>
#include <math.h>
#include <string.h>

void main()
{

    char CharacterName[] = "Vishal"; // String variable
    int Age = 45;

    printf("Once there was a man named %s.\n", CharacterName);
    printf("%s was a %d years old man.\n", CharacterName, Age);
    printf("He really liked %s but didn't like being %d.\n", CharacterName, Age);

    double sum = 0.1 + 0.2;   // Sum
    double diff = 0.1 - 0.2;  // Difference
    double mult = 0.1 * 0.2;  // Multipicaltion
    double div = 1 / 2;       // Division
    double Modulus = 100 % 4; // the division remainder
    double Increment = Age++; // Increases the value of a variable by 1
    double Decreases = Age--; // Decreases the value of a variable by 1

    double power = pow(2, 3);     // 2^3
    double ceiling = ceil(2.7);   // round up to the next number
    double flooring = floor(2.3); // round down to the number present

    double AND = 1 & 0;      // Logical AND
    double Once = 1 | 0;     // Logical OR
    double XOR = 1 ^ 0;      // Logical XOR
    double shift = 100 >> 3; // Binary shift

    const float alway = 10.00;
    // alway = 11; // it wouldn't change

    // When you divide two Interger you'll end up with an integer
    printf("%lf", shift); // "%d" , "%lf" are called format spcefier

    char MyName[] = "";
    int YearsOld;

    printf("\nEnter your name and age : ");
    // scanf("%s%d", MyName, &YearsOld);      // In this part of the code we don't get anything after the space or an enter that is why we use fgets
    fgets(MyName, 50, stdin); // Takes input of the whole line and also the \n which we press in the end

    printf("\nYour name is %s and you are %d years old!", MyName, YearsOld);

    char array[] = "eV";           // Array of characters
    int intArray[] = {1, 2, 3, 4}; // Array of integer

    printf("%c%d", array[0], intArray[0]);

    // Structure
    struct Student
    {
        char name[50];
        char major[50];
        double gpa;
        int age;
    };

    struct Student BAI1271;
    strcpy(BAI1271.name, "Vishal"); // you copy because you can't do name = "Vishal" name is a array of char
    strcpy(BAI1271.name, "CS");
    BAI1271.gpa = 8.7;
    BAI1271.age = 18;

    printf("%d", BAI1271.age);

    // Nested arrays

    int s[2][3] = {
        {1, 2, 3},
        {61, 5, 4}};
    char t[2][6] = {
        "Vishal",
        "shekha"};

    printf("%c", t[1][2]);
    printf("%d", s[1][2]);
}