//Alexander Lemkin
//June 22,2012
//Creating a random math problem generator that allows the user to control the number of problems
#include <stdio.h>
#include <math.h>
#include<stdlib.h>

int main(void)
{
    //declaring the variables needed throughout the program
    int num1, num2, operator, neg_pos1, neg_pos2, num_q, i, j = 0;
    float answer, user_answer, percent_c;
    //seeding the random numbers to the internal clock
    srand(time(0));
    //printing the welcome message and allowing the user to input the amount of questions they want
    printf("Welcome! How many problems would you like?\n");
    scanf("%d", &num_q);
    //the neg_pos are for the positive or negative aspect, the rest is seeding from 0-50 and setting the for loop over the whole operation
    for (i = 1; i <= num_q; i++) {
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
    //switching operator to decide which operation happens
        switch(operator) {
            case 1:
                printf("Here is random problem number %d.\n", i);
                answer = num1 + num2;
                printf("%d + %d = ?\n\n", num1, num2);
                printf("Answer:");
                scanf("%f", &user_answer);
                printf("\n");
                break;
            case 2:
                printf("Here is random problem number %d.\n", i);
                answer = num1 - num2 ;
                printf("%d - %d = ?\n\n", num1, num2);
                printf("Answer:");
                scanf("%f", &user_answer);
                printf("\n");
                break;
            case 3:
                printf("Here is random problem number %d.\n", i);
                answer = num1 * num2;
                printf("%d * %d = ?\n\n", num1, num2);
                printf("Answer:");
                scanf("%f", &user_answer);
                printf("\n");
                break;
            case 4:
                printf("Here is random problem number %d.\n", i);
                answer = num1 / (float)num2;
                printf("%d / %d = ?\n\n", num1, num2);
                printf("You must put in your answer with up to 6 decimal places if it goes that far.\n");
                printf("\nAnswer:");
                scanf("%f", &user_answer);
                printf("\n");
                break;
            default:
                printf("Something went wrong, please restart.\n");
            }
        //using j as the amount of problems the user gets right
        if (user_answer == answer)
            j++;
        }
        //printing out how many the user got right and the percentage right
        percent_c = ((float)j/(float)(i-1)) * 100;
        printf("You got %d/%d correct. That is %.1f%%!", j, i - 1, percent_c);

    return 0;
}
