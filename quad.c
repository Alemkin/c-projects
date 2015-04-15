//Alexander Lemkin
//June 1, 2012
//Quadratic solver for Math Academy

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    //Declaring all of my variables to be used in the program
    int a, b ,c;
    float x_pos, x_neg, under_square_root;

    //Prompting the user to enter the variables given and adding an extra space after
    printf("What is the value of a?\n");
    scanf("%d", &a);

    printf("What is the value of b?\n");
    scanf("%d", &b);

    printf("What is the value of c?\n");
    scanf("%d", &c);

    printf("\n");

    //Making a seperate value for the sqrt function, so it can be evaluated as neg or pos in the upcoming if/else
    under_square_root =(pow(b, 2)-(4*a*c));
    //printf("%f", square_root_b);

    //Evaluating the equation for the x values
    x_pos = (-b + sqrt(under_square_root))/(2.0*a);
    x_neg = (-b - sqrt(under_square_root))/(2.0*a);

    //Conditional statement if sqrt is negative
    if(under_square_root < 0)
        printf("There are no real number solutions for this quadratic.\n");

    else    {
        //Conditional statement if sqrt is equal to 0
        if(under_square_root == 0) {
            printf("There is only one solution for this quadratic.\n");
            printf("A root of the quadratic is %.2f\n", x_pos);
        }
        //Conditional statement if sqrt is greater than 0
        if(under_square_root > 0) {
        printf("There are two solutions for this quadratic.\n");
        printf("A root of the quadratic is %.2f\n", x_pos);
        printf("A root of the quadratic is %.2f\n", x_neg);
            }
        }




    return 0;
}
