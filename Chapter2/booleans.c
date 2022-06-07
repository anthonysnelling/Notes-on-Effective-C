// boolean values can be called with this header
#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    bool flag1 = false;
    // you can also you the reserved keyword _Bool in C99
    _Bool flag2 = 1;

    printf("bool one: %s", flag1 ? "true\n" : "false\n");
    printf("bool two: %s", flag2 ? "true\n" : "false\n");
}