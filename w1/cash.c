#include <stdio.h>
#include <cs50.h>
#include <math.h>

// 1. get prompt, 2. make prompt non-negative 3. convert answer to int, 4. do the math, 5. return or print least amount of change needed
int main(void){
    float total;
    do {
        total = get_float("Change owed: \n");
    } while ( total < 0);
    
    printf("Please return %f in change \n", total);
    int counter = 0;
    float totalcoins = total - floorf(total);
    
    if(counter != 0 || total != 0){
        //DOLLARS
        int dollars = floorf(total);
        counter = dollars *4;
        printf("%i quarters in %i dollars \n", counter,         dollars);
        //QUARTERS
        int qct = floorf(totalcoins/0.25);
        printf("%i quarters needed in coins\n", qct);
        totalcoins = totalcoins - (0.25 * qct);
        counter = counter + qct;
        
        //DIMES
        int dimes = floorf(totalcoins/0.10);
        printf("%i dimes needed in coins\n", dimes);
        totalcoins = totalcoins - (0.10 * dimes);
        counter = counter + dimes;
        
        //NICKELES
        int nickles = floorf(totalcoins/0.05);
        printf("%i nickles needed in coins\n", nickles);
        totalcoins = totalcoins - (0.05 * nickles);
        counter = counter + nickles;
        
        //PENNIES
        int pennies = ceilf(totalcoins/0.01);
        printf("%i pennies needed in coins\n", pennies);
        totalcoins = totalcoins - (0.01 * pennies);
        counter = counter + pennies;
        
        printf("change given: %i \n", counter);
        return counter;
    }
    else {
        printf("zero!\n");
    }
}
