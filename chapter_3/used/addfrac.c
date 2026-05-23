#include <stdio.h>

int main(void)
{
    int num1, num2, denom1, denom2, resultNum, resultDenom;
    printf("\n* * * * * * *\nFraction Adding Program\nEnter the first fraction in a/b format: ");
    scanf("%d/%d",&num1,&denom1);
    printf("Enter the second fraction in a/b format: ");
    scanf("%d/%d",&num2,&denom2);

    resultNum = num1*denom2 + num2*denom1;
    resultDenom = denom1 * denom2;

    printf("Result fraction is: %d/%d\n",resultNum,resultDenom);

    return 0;

}