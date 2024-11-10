#include <stdio.h>

void swapper(int*,int*);
void swapper(int* a , int* b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int x;
    int y;
    
    
    printf("Hello I am swapper:\n");
    
    
    printf("Please enter the value 1: ");
    scanf("%d", &x);
    
    
    printf("Please enter the value of 2: ");
    scanf("%d",&y);

    printf("\nThe Value of x and y is\nx = %d\ny = %d", x,y);

    swapper(&x,&y);
    printf("\n\nNow the values are swapped");

    printf("\nThe value of x is now %d", x);
    printf("\nThe value of y is now %d", y);   
}