// computes dimentional weight of a box
#define Inches_Per_Pound 166
#include <stdio.h>

int main(void){
    int width, height, depth, volume, dweight;

    for(int i=0; i<11; i++){
        printf(" *");
    }
    printf("\nDimentional Weight Calculator\n");
    printf("Enter the width: ");
    scanf("%d",&width);
    printf("Enter the height: ");
    scanf("%d",&height);
    printf("Enter the depth :");
    scanf("%d",&depth);
    volume = width*height*depth;
    dweight = (volume+Inches_Per_Pound-1)/Inches_Per_Pound; //for rounding
    printf("\n[width(%d) * height(%d) * depth(%d) +165] / 166 = %d\n",width,height,depth,dweight);
    return 0;
}