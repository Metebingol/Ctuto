#include<stdio.h>




int main(){

    int a;
    a = 5;
    int *b;
    b = &a;
    printf("pointer:%x and %x\n",b,&a);
    int c[3] = {1,2,3};
    printf("point of array: %i",*(c+2));








    return 0;
}