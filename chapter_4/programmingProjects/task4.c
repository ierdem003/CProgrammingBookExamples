#include <stdio.h>

int main(void){
    int digits[11];
    int sumFirstHalf, sumSecondHalf, total;

    printf("Enter 11 digits to calculate check digit: (00000000000) :");
    
    for(int i = 0 ; i < 11; i++){        
        scanf("%1d",&digits[i]);        
    }
    
    sumFirstHalf=0;
    sumSecondHalf=0;
    
    for(int i=0;i<6;i++){
        sumFirstHalf+=digits[i * 2];
    }
    
    for(int i=0;i<5;i++){
        sumSecondHalf+=digits[i * 2 + 1];
    }
     total = 3 * sumFirstHalf + sumSecondHalf;

     printf("Check digit -> %d\n", 9 - ((total - 1) % 10));

    return 0;
}