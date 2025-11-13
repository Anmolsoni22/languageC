#include<stdio.h>
    int main (){
    char ch;

    printf("enter an alphabet: ");
    scanf("%c", &ch);

    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')){

        if (ch >= 'A' && ch <= 'Z'){
            ch = ch + 32;
    }
        if (ch == 'a'){
            printf ("alphabet is vowel \n");
    }
     else if (ch == 'e'){
        printf ("alphabet is vowel \n");
    }
     else if (ch == 'i'){
        printf ("alphabet is vowel \n");
    }
    else if (ch == 'o'){
        printf("alphabet is vowel \n");
    }
    else if (ch == 'u'){
        printf("alphabet is vowel \n");
    }
     else {
       printf("alphabet is constent \n");
    }
    }

    }
