#include <stdio.h>

int main(void){
    int PI_number, digits, temp, temp2, output, stepCount;
    digits=1;
    output=0;
    stepCount=0;

    printf("Enter a decimal number for converting to octal: ");
    scanf("%d",&PI_number);
    
    //calculating digit count
    temp=PI_number;
    while(temp/10!=0){
        temp = temp / 10;
        digits++;
    }
    temp = PI_number;
    
    while(temp>0){
        temp2 = 1;
        for (int i = 0; i< stepCount; i++){
        temp2*=10;
        }
        output+=(temp%8)*(temp2);
        temp = temp/8;
        stepCount++;
    }
    printf("output : %d\n", output);
    
    return 0;

}