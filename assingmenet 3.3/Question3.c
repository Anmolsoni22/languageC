#include<stdio.h>
int main(){
    float sp, cp, diff;

    printf("enter cost price: ");
        scanf("%f", &cp);

    printf("enter selling price: ");
    scanf("%f", &sp);

    diff = sp - cp;

    if(diff > 0){
        printf("profit = %.2f\n",diff);
        }
        else if (diff < 0){
            printf("loss = %.2f\n",-diff);
            }
            else{
                printf("No profit no loss. \n");
                }

}
