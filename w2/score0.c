#include <stdio.h>
#include <cs50.h>

int main(void){
// create a hash bar for score 1
    int score1 = get_int("Score 1:");
//    int score2 = get_int("Score 2:");
//    int score3 = get_int("Score 3:");
    
    printf("Score 1: /n");
    for(int i=0; i<score1;i++){
        printf("#");
    }
    printf("\n");
}
