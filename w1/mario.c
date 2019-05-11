#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n = 1;
    do {
        n = get_int("height: ");
    }
    while( n > 8 || n <= 0);
    printf("%d \n", n);
    
    switch(n) {
        case 8:
            printf("#  #\n");
            printf("##  ##\n");
            printf("### ###\n");
            printf("####  ####\n");
            printf("#####  #####\n");
            printf("######  ######\n");
            printf("#######  #######\n");
            printf("########  ########\n");
            break;
        case 7:
            printf("#  #\n");
            printf("##  ##\n");
            printf("### ###\n");
            printf("####  ####\n");
            printf("#####  #####\n");
            printf("######  ######\n");
            printf("#######  #######\n");
            break;
        case 6:
            printf("#  #\n");
            printf("##  ##\n");
            printf("### ###\n");
            printf("####  ####\n");
            printf("#####  #####\n");
            printf("######  ######\n");
            break;
        case 5:
            printf("#  #\n");
            printf("##  ##\n");
            printf("### ###\n");
            printf("####  ####\n");
            printf("#####  #####\n");
            break;
        case 4:
            printf("#  #\n");
            printf("##  ##\n");
            printf("### ###\n");
            printf("####  ####\n");
            break;
        case 3:
            printf("#  #\n");
            printf("#  ##\n");
            printf("### ###\n");
            break;
        case 2:
            printf("#  #\n");
            printf("#  ##\n");
            break;
        case 1:
            printf("#  #\n");
            break;
        default:
            printf("mario!!\n");
            break;
    }
}
