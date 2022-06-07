#include <stdio.h>

int main(void){
    // enums allow you to assign names to integer values

    // if you don't define integers they start at 0 and increment from there
    enum day{ sun, mon, tue , wed, thu, fri, sat };

    // you can assign a number to each one
    enum cardinal_points{ north = 0, east = 90, south = 180, west = 270 };

    // you can also declare the first element as one and the rest will increment from there
    enum months { jan = 1, feb, mar, april, may, jun, jul, aug, sep, oct, nov, dec };

    printf("Sunday: %i, Monday: %i, Saturday: %i \n", sun, mon, sat);
    printf("north: %i, east: %i, west: %i \n", north, east, west);
    printf("January: %i, February: %i, December: %i \n", jan, feb, dec);
}