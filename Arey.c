#include <stdio.h>

int main()
{
    // Two dimentional array
    // char plt[3][100];
    // printf("Enter first : ");
    // scanf(" %s",plt[0]);
    // printf("Enter second : ");
    // scanf(" %s",plt[1]);
    // printf("Enter third : ");
    // scanf(" %s",plt[2]);
    // printf("%s %s %s", plt[0], plt[1], plt[2]);
    
    // Multidimentional array
    char plt[3][2][100] = {
        {"",""},
        {"",""},
        {"",""}
    };
    int j = 0;
    for (int i = 0 ; i<3; i++) {
        j = 0 ;
        printf("Enter the name of student %d : ",i+1);
        scanf("%s",plt[i][j]);
        j++;
        printf("Enter the registration number %d : ",i+1);
        scanf("%s",plt[i][j]);
        j++;
    }
    for (int i = 1 ; i<=3; i++) {
        j = 0 ;
        printf("\nthe name of student %d %s",i,plt[i][j]);
        j++;
        printf("\nthe registration number %d %s",i,plt[i][j]);
        j++;
    }    

    return 0;
}