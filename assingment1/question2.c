#include <stdio.h>
int main(){
            int b;
            int da;
            int r;
            int gs;

            printf("enter your basic salary:");
            scanf("%d",&b);

            da=b*40/100;
            r=b*20/100;

            gs=b+da+r;
            printf("Total gross salary: " "%d", gs);



}
