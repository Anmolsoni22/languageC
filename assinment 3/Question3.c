#include<stdio.h>
    int main(){
    int x,y;

    printf("enter the x corrdinate: ");
    scanf("%d", &x);

    printf("enter the y corrdinate: ");
    scanf("%d", &y);

    if ( x > 0 && y > 0){
        printf("the point (%d,%d)lies in Quadrant 1.\n",x,y);
    }
    else if ( x < 0 && y > 0 ){
        printf("the point (%d,%d) lies in Quadrant 2. \n", x,y);
    }
    else if ( x < 0 && y < 0){
        printf("the point (%d,%d) lies in Quadrant 3. \n", x,y);
    }
    else if ( x > 0 && y < 0 ){
        printf("the point (%d,%d) lies in Quadrant 4. \n", x,y);
    }
    else if ( x == 0 && y == 0 ){
        printf("the point (%d,%d) lies in origin. \n", x,y);
    }
    else if (x == 0){
        printf("the point (%d,%d) lies in x axis. \n", x,y);
    }
    else if (y == 0){
    printf("the point (%d,%d) lies in y axis. \n", x,y);
    }
    }
