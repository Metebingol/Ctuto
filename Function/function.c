#include<stdio.h>


int sum(int *a, int *b);



int main(){
    int d = 5;
    int e = 4;
    int c;
    c = sum(&d,&e);


    printf("%d",c);


    return 0;
}



int sum(int *a, int *b){
    return *a + *b;
}

