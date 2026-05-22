//calculating volume of a sphere
#define PI 3.141592653
#include <stdio.h>

int main(void){
    float volume, radius;

    printf("* * * * *\nEnter the radius: ");
    scanf("%f",&radius);
    volume = (4.0/3.0)*(PI)*(radius*radius*radius);
    printf("\nVolume -> %.2f\n",volume);
}