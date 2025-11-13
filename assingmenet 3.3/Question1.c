#include<stdio.h>

    int main(){
    int ch;

    printf("enter any character: ");
    scanf("%c", &ch);

    if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z' )){
        printf ("the character is alphabet \n");
    }
    else if (ch >= '0' && ch <= '9'){
        printf ("the character is digit \n");
    }
    else{
        printf ("The character is a special character");
        }
    }
