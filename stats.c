//Alexander Lemkin
//July 8, 2012
//Mean and Standard Deviation of Average Math Scores
#include <stdio.h>
#include <math.h>
#include<stdlib.h>

int main(void){
    //Opening the file that will contain the average scores
    FILE*ifp = fopen("input.txt", "r");
    //initializing the integers, floats and array used in this program
    int i, j, sum = 0;
    float mean, tot_sum = 0, sub_score, square_score, div_totsum, stand_dev;
    int stud_scores[20];

    //using a for loop to scan in all the variables to the array
    for(i=0; i<20; i++)
        fscanf(ifp, "%d", &stud_scores[i]);

    //using a for loop to add all the averages together and divide by 20 to find the mean
    for(i=0; i<20; i++)
        sum += stud_scores[i];

    mean = (sum/20.0);

    //Using the for loop to do the specific expressions to find the standard dev
    for(i=0; i<20; i++) {
        sub_score = stud_scores[i] - mean;
        square_score = pow(sub_score, 2);
        tot_sum += square_score;
    }

    //calculating the standard deviation
    div_totsum = (tot_sum/20.0);
    stand_dev = sqrt(div_totsum);

    //printing the mean and standard deviation to the screen.
    printf("The mean is %.2f\n", mean);
    printf("The standard deviation is %.2f\n", stand_dev);

    //closing the input file
    fclose(ifp);

    return 0;
}
