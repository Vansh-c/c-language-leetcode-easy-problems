// pointer is a variable which stores address of another variable . It can be of type int, char , array , function or any other pointer 
// size depends on the architecture ex : 2 bytes for 32 blts
// pointer in c can be declared using asterisk symbol(*)

// the address of pointer '&' returns the address of a variable 
// '*' asterisk is a referemce operator (also called indirection operator) used to get the value at a given address . 

// pointer that is not assigned any value but null is known as null pointer  .  
// In c ,a null pointer is a pointer which doiesnt point to any object or function
// we can us it to assign a pointer variable when that pointer variable isn't assigned any valid memory address yet. 
// ex: int *ptr = NULL ; 

#include <stdio.h>

int main()
{
    printf("let's learn about pointers \n");
    int a = 9;
    int *ptra = &a;              // ptra is such variable which has address of a 
    int *ptr2 = NULL ; 
    printf("the value of a is %d \n",a);
    printf("The address of a is %x \n",ptra);      //this line will print address of a 
    printf("the address of pointer to a is %x\n",&ptra) ;                // this line will print adress of pointer to a 
    printf("the value  of a is %d \n \n",*ptra) ;
    printf("the value of some garbage is %p \n\n",ptr2);

     printf("The address of a is %p\n",ptra);      //this line will print address of a 
    printf("the address of pointer to a is %p\n",&ptra) ; 

    return 0;
}


// Uses of array 
// Dynamic memeory location 
//Arrays, function  ,  and structures 
// return multiple values from the function 
// pointer reduces the code and improves the performance 
