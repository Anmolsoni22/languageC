#include <stdio.h>
int main(){
            float sp,tp,cp;
            float tcp;

            printf("enter your selling price:");
            scanf("%f", &sp);
            printf(" \n enter your profit price:");
            scanf("%f",&tp);

            tcp=sp-tp;
            cp=tcp/15;
            printf("Cost price of 1 item: %f",cp);
            printf("\n %f " , tcp);



}
