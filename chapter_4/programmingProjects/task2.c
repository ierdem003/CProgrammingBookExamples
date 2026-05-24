#include <stdio.h>

int main(void){
    int PI_number;

    printf("Enter a three digit number to reverse :");
    scanf("%d",&PI_number);
    printf("Reversed number is: %d\n",(PI_number/100)+((PI_number/10)%10)*10+((PI_number%100)%10)*100);

    return 0;
}
