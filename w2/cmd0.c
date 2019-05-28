#include <stdio.h>
#include <cs50.h>

// /* printing command-line argument */
// int main(int argc, string argv[]){
//    if(argc==2){
//         printf("hello, %s\n", argv[1]);
//     } else {
//         printf("hello world\n");
//     }
// }

// // ./caesar trisha => hello, trisha
// // ./caesar trisha aguinaldo => hello world

// /* print cmd-line arg each character */
// int main(int argc, string argv[])
// {
//     for(int i =0; i < argc; i++){
//         printf("%s\n", argv[i]);
//     }
// }
// // ./caesar trisha => hello, trisha

/* print the entire argument */
int main(int argc, string argv[]){
    printf("arguments: %i str: %s\n", argc, argv[1]);
}
// ./caesar hello => arguments: 2 str: hello