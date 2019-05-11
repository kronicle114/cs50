#include <stdio.h>
#include <cs50.h>
#include <math.h>

// 1. get prompt, 2. make prompt non-negative 3. convert answer to int, 4. do the math, 5. return this number (print)
int main(void){
    float q;
    do {
        q = get_float("Change owed: \n");
    } while ( q < 0);
    
    printf("Please return %f \n", q);
    int counter = 0;
    float totalcoins = q - floorf(q);
    int dollars = floorf(q);
    counter = dollars *4;
    printf("counter dollars %i \n", counter);
    int qct = floorf(totalcoins/0.25);
    printf("number of quarters needed %i\n", qct);
    totalcoins = totalcoins - (0.25 * qct);
    counter = counter + qct;
    printf("coins after first iteration: %f \n", totalcoins);
    printf("new counter total %i \n", counter);
    //     float dimes = (quarters/0.10);
    //     float nickels = (dimes/0.05);
    //     float pennies = (nickels/0.01);
    printf("dollars: %i \n", dollars);
    printf("coins: %f \n", totalcoins);
}
