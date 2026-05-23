#include <stdio.h>

int main(void){
    int numbers[9];
    printf("Enter 9 numbers seperated by ',' : ");
    for(int i = 0 ; i < 9; i++){
        scanf("%d,",&numbers[i]);
    }
    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 3 ; j++){
            printf("%d ",numbers[i*3 + j]);
        }
        printf("\n");
    }
    return 0;    
}