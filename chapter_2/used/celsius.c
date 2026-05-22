#include <stdio.h>
#define FreezingPoint 32.0f
#define FahrenheitToCelsius 5.0f/9.0f

int main(void){
float fahrenheit, celsius;

for(int i=0; i<11; i++, printf(" *"));
printf("\n Enter fahrenheit: ");
scanf("%f",&fahrenheit);
celsius=(fahrenheit-FreezingPoint)*FahrenheitToCelsius;
printf("%.1f\n",celsius);
    
return 0;
}