//Alexander Lemkin
//June 8, 2012
//Calculator for the Math Academy

#include <stdio.h>
#include <math.h>
#include<stdlib.h>

int main() {
    //declaring all the variables needed for this program
    float X, Y;
    float answer;
    char operator;
    //Telling the user what the format is and asking for the values of X and Y and the operator between them.
    printf("The calculation format is X <op> Y.\n");
    printf("What is the value of X?\n");
    scanf(" %f", &X);
    printf("What is the value of Y?\n");
    scanf(" %f", &Y);
    printf("What is your operator?\n");
    scanf(" %c", &operator);

    //Using a switch statement to decide which operation to use depending on the character the user enters.
    switch(operator) {
        case '+':
            answer = X + Y;
            break;
        case '-':
            answer = X - Y;
            break;
        case '*':
            answer = X * Y;
            break;
        case '/':
            answer = X/Y;
            break;
        case '^':
            answer = pow(X, Y);
            break;
        case '%':
            answer = (int)X % (int)Y;
            break;
        default:
            printf("You did not enter a valid operation. \nThe following information will be incorrect.\n\n");
    }
    //printing the operation and answer depending on what the user entered.
    printf("\n%.2f %c %.2f is %f", X, operator, Y, answer);

    return 0;
}
