#include <stdio.h>

int main(void){

    int productID, productCount, productWeight;


    printf("Enter product ID : ");
    scanf("%d",&productID);
    printf("Enter product Count : ");
    scanf("%d",&productCount);
    printf("Enter product Weight : ");
    scanf("%d",&productWeight);
    printf("\n\t|\tID\t|\tCOUNT\t|\tWeight\t|\n\t|\t%d\t|\t%d\t|\t%d\t|\n",productID,productCount,productWeight);

    return 0;   
}