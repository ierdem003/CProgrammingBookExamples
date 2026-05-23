#include <stdio.h>

int main(void){
    int myInt;
    float myFloat;

    myInt = 40;
    myFloat = 241.42f;

    printf(" %d | %5d | %-5d | %5.3d |\n", myInt, myInt, myInt, myInt);
    printf(" %10.3f | %10.3e | %-10g | \n", myFloat, myFloat, myFloat);

    return 0;
}