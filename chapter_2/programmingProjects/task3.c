//for adding set amount of tax to a price

#include <stdio.h>

int main(void){
    int PI_taxRate, PI_basePrice;
    
    printf("set tax percentage :");
    scanf("%d", &PI_taxRate);
    printf("enter base price :");
    scanf("%d", &PI_basePrice);

    
    printf("\nTax included price is : %.2f\n",(PI_basePrice+(PI_basePrice*PI_taxRate)/100.0));
}
