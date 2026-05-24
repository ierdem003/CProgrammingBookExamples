#include <stdio.h>

int main(void){

    int PI_number;

    printf("\nEnter a two digit number to reverse: ");
    scanf("%d",&PI_number);
    printf("\nReversed : %d\n",(PI_number/10)+(PI_number%10)*10);

    return 0;
}