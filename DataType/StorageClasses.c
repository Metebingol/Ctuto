#include<stdio.h>

// Storage Classes- auto, register, static adn extern. 


int main(){

    // auto: it is default storage class for all local variable
    auto int month;
    month = 5;

    // register: it is storage class used to define local variable that is stored in register instead of RAM. 
    // it can be used in guick access and it is not have memory location.  
    register int counter;
    counter = 0;

    //static: The static storage class instructs the complier to keep a local variable in existence. In other words;
    // the local variable is not created and destoryed for each decleration. Using the static method in function can be useful.
    static int pinar = 18;

    //extern: The extern storage class is used to give a reference of a global variable that is visible to all the program files.
    extern int sum();
    extern int count;
    return 0;
}