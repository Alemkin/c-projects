//Alexander Lemkin  COP3223 M W 2-3:50pm
//Assignment #1 distance.c
//May 22, 2012

#include <stdio.h>
#include <math.h>

int main() {
    //creating the integers to use in the program
    int x1, x2, y1, y2;
    float distance;

    //Asking for all the variables to be scanned in
    printf("What is the value of X1?\n");
    scanf("%d", &x1);

    printf("What is the value of Y1?\n");
    scanf("%d", &y1);

    printf("What is the value of X2?\n");
    scanf("%d", &x2);

    printf("What is the value of Y2?\n");
    scanf("%d", &y2);
    printf("\n");


    //Making the distance variable equal to the equation using the other variables scanned in.
    distance = sqrt(pow((x2-x1), 2)+ pow((y2-y1), 2));

    //printing out the answer for the user.
    printf("The distance between (%d, %d) and (%d, %d) is %.2f units.\n", x1, y1, x2, y2, distance);

    return 0;
}
