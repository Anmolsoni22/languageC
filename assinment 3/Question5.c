#include<stdio.h>
    int main(){
    int math, physic, chemestary;
    int total_all, total_mp;

    printf("enter marks in mathematics: ");
    scanf("%d", &math);

    printf("enter marks in physic: ");
    scanf("%d", &physic);

    printf("enter marks in chemestary: ");
    scanf("%d", &chemestary);
    if (math>65){
    printf("the candidate was not eligible(marks less then 65)");
   }
   else if (physic>55){
      printf("the candidate was not eligible (marks less than 55)");
   }
   else if (chemestary>50){
      printf("the candidate was not eligible (marks less then 50)");
   }
   else{
      printf("the candidate was not eligible");
      }
      }
