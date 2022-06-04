/*
This program tries to swap some values and print them
it fails to actually swap them because C is a pass by value language
which means in this example the variables dont swap because C
creates new variables for that function
*/
#include <stdio.h>

void swap(int a, int b){
    int t = a;
    a = b;
    b = t;
    printf("swap: a = %d, b = %d\n", a, b);
}

int main(void) {
    int a = 21;
    int b = 17;

    swap(a,b);
    printf("main: a = %d, b = %d\n", a, b);
    return 0;
}

