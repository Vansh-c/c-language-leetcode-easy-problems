// uninitialized pointer are known as wild pointers . 
// These pointers point to some arbitrary location in memory and may cause a program to crash or behave badly . 
// dereferencing wild pointer can cause nasty pointers. 
// It is suggested to always initialized unused pointer to NULL . 



#include <stdio.h>
#include <stdlib.h>


int main()
{
    int a = 334; 
    int *ptr;   // this is wild pointer
    *ptr = 34 ;    // this is not a good thing to do 
    ptr = &a ;  // ptr is not longer a wild pointer . 

    printf("The value of a is %d \n",*ptr);
    return 0; 
}