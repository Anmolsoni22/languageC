#include<stdio.h>
int main(){
            float a,b,c,d,e , ag, per;


            printf("enter your all marks:");

            scanf("%f%f%f%f%f", &a, &b ,&c, &d ,&e);

            ag=a+b+c+d+e;
            per=(ag/500)*100;
            printf("your aggregate and percentage:" "%f %f", ag , per);

}
