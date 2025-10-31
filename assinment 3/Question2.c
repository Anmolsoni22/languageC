#include<stdio.h>
    int main(){
    int m,n;
    printf("enter the value of an integer  m");
    scanf("%d", &m);
     if (m > 0){
        n = 1;
     }
     else if (m == 0){
        n = 0;
     }
     else if (m < 0){
        n = -1;
     }

        printf("n is %d \n", n);
    }
