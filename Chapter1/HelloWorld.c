#include <stdio.h>
#include <stdlib.h>
int main(void) {
    // puts returns Either a negative int of the Macro EOF or a nonnegative integer if it succeeds
    if (puts("Hello, World!") == EOF) {
        return EXIT_FAILURE;
    }
    //printf returns the number of characters input on success or a negative value if an output or encoding value 
    // occurred 
    if(printf("%s\n", "Nice to meet you") < 0) {
        return EXIT_FAILURE;
    }
    return EXIT_SUCCESS;
}