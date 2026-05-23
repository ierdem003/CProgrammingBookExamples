#include <stdio.h>

int main(void){

    int PI_GSI, PI_GROUPID, PI_PUBLISHER, PI_ITEMNO, PI_CHECKDIGIT;

    printf("Enter the ISBN number (111-1-111-11111-1): ");
    scanf("%d-%d-%d-%d-%d",&PI_GSI,&PI_GROUPID,&PI_PUBLISHER,&PI_ITEMNO,&PI_CHECKDIGIT);
    printf("- - - - - - - - - -\nGSI prefix:\t%d\nGroup identifier:\t%d\nPublisher code:\t%d\nItem number:\t%d\nCheck digit:\t%d\n",PI_GSI,PI_GROUPID,PI_PUBLISHER,PI_ITEMNO,PI_CHECKDIGIT);

    return 0;
}