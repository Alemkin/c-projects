//Alexander Lemkin
//June 15,2012
//Creating a random math problem generator
#include <stdio.h>
#include <math.h>
#include<stdlib.h>

int main() {
    //declaring the variables needed throughout the program
    int num1, num2, operator = 0, loop = 0, neg_pos1, neg_pos2;
    float answer, user_answer;
    //seeding the random numbers to the internal clock
    srand(time(0));
    //the neg_pos are for the positive or negative aspect, the rest is seeding from 0-50
    neg_pos1 = rand() % 2; //0-1
    neg_pos2 = rand() % 2; //0-1
    num1 = rand() % 51; //0-50
    num2 = rand() % 51; //0-50
    operator = rand() % 4 + 1; //1-4
    //setting the if statements to decide whether the number becomes negative or not
    if(neg_pos1 < .5)
        num1 = num1 * -1;

    if(neg_pos2 < .5)
        num2 = num2 * -1;
    //printing the welcome message
    printf("Welcome! Here is your random problem:\n");
    //switching operator to decide which operation happens
    switch(operator) {
        case 1:
            answer = num1 + num2;
            printf("%d + %d = ?\n\n", num1, num2);
            printf("Answer:");
            scanf("%f", &user_answer);
            break;
        case 2:
            answer = num1 - num2 ;
            printf("%d - %d = ?\n\n", num1, num2);
            printf("Answer:");
            scanf("%f", &user_answer);
            break;
        case 3:
            answer = num1 * num2;
            printf("%d * %d = ?\n\n", num1, num2);
            printf("Answer:");
            scanf("%f", &user_answer);
            break;
        case 4:
            answer = num1 / (float)num2;
            printf("%d / %d = ?\n\n", num1, num2);
            printf("You must put in your answer with up to 6 decimal places if it goes that far.\n");
            printf("\nAnswer:");
            scanf("%f", &user_answer);
            break;
        default:
            printf("Something went wrong, please restart.\n");
        }
    //setting the loop for if the user gets the answer wrong, then he/she can keep trying
        while(loop == 0) {

        if( user_answer == answer) {
            printf("\nCongratulations! You have answered the problem correctly!\n");
            loop = 1;
            break;
        }
        else
            printf("\nI'm sorry, that is not correct. Please try again.\n");
            printf("Answer:");
            scanf("%f", &user_answer);
    }

    return 0;
}
