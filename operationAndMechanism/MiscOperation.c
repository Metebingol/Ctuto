#include<stdio.h>


int main(){

    // sizeof() retrun the size of a variable 
    int a;
    a =5;
    //printf("%d",sizeof(a));
    // & return address of a variable
    int b;
    b = 7;
    printf("%p",&b);
    // * pointer to a variable
    // to be continued
    // ?: conditional 
    b = 3==2 ? 5:3;
    return 0;
}