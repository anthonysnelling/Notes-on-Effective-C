// Declare an array of three pointers to functions and invoke the
// appropriate function based on an index value passed in as an argument

#include <stdio.h>

void function1(void){
    printf("This is function 1\n");
}
void (*function1Pointer)() = function1;

void function2(void){
    printf("This is function 2\n");
}

void function3(void){
    printf("This is function 3\n");
}

// creating an array and then filling it with functions
void (*funcArr[])(void) = {function1, function2, function3};
// this pointer is pointing to the address
void (*func_1_point)(void) = &function1;
// this one is pointing to the actual function
void (*func_1_point_v2)(void) = function1;

int main(void){
    (*funcArr[0])();
    (*funcArr[1])();
    (*funcArr[2])();
    // since you pointed to the address in this one you have to dereference with *
    (*func_1_point)();
    // this one you can just call the pointer like a function since you pointed to the function and not its address
    func_1_point_v2();
    return 0;
}