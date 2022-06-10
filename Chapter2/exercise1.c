#include <stdio.h>

unsigned int *countPointer;

void increment(void){
    static unsigned int counter = 0;
    counter++;
    printf("%d ", counter);
    countPointer = &counter;
}

int retrieve(unsigned int *val){
    unsigned int result = *val;
    return result;
}

int main (void){
    for (int i = 0; i < 5; i++)
    {
        increment();
    }
    int result = retrieve(countPointer);
    printf("\ncurrent count: %d\n", result);
    return 0;
}