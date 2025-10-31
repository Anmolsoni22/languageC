#include<stdio.h>
    int main(){
    int a, b, c;
    printf("enter a number: ");
    scanf("%d%d%d", &a,&b,&c);

    if (a == b && b == c){
        printf(" all number are equal \n");
    }
    else if (a > b && a > c){
        printf("this is a largest number %d \n",a);
    }
    else if (b > a && b > c){
        printf("this is a largest number %d \n",a);
    }


    else
        printf("this is a largest number %d \n", c);
    }


