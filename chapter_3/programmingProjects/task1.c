#include <stdio.h>

int main(void){

    int PI_year, PI_month, PI_day;

    printf("* * * * * * * *\nEnter a date in yyyy/mm/dd format :");
    scanf("%d/%d/%d",&PI_year,&PI_month,&PI_day);
    printf("-> %2.2d/%2.2d/%4.4d\n", PI_day, PI_month, PI_year);
}