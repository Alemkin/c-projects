#include <stdio.h>
#include <math.h>
#include<stdlib.h>

int main(void){
    int num = 4, num_correct, tot_num, percent, i, j, flag=0;
    char name[20], operator;

    FILE * ofp = fopen("output.txt", "w");
    FILE * ifp = fopen("input.txt", "r");

    fscanf(ifp, "%s", &name);
    fprintf(ofp, "%s", name);
    fprintf(ofp, "\n");

    for(i = 0; i < num; i++) {
        fscanf(ifp, "%d", &num_correct);
        fscanf(ifp, "%d", &tot_num);
        percent = ((float)num_correct/(float)tot_num) * 10;

        if(flag == 0)
            operator = '+';
        else if (flag == 1)
            operator = '-';
        else if (flag == 2)
            operator = '*';
        else
            operator = '/';

        fprintf(ofp, "%c", operator);

        fprintf(ofp, ":\t");

        for(j = 0; j < percent; j++)
            fprintf(ofp, "*");

        fprintf(ofp, "\n");

            flag++;
    }

    fclose(ifp);
    fclose(ofp);


    return 0;
}
