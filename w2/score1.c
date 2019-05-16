#include <stdio.h>
#include <cs50.h>

void chart(int score){
    for(int i = 0; i < score; i++){
        printf("#");
    }
}

int main(void){
    int score1 = get_int("Score 1:");
    int score2 = get_int("Score 2:");
    int score3 = get_int("Score 3:");
    
    printf("Score 1: \n");
    chart(score1);
    
    printf("Score 2: \n");
    chart(score2);
    
    printf("Score 3: \n");
    chart(score3);
}
