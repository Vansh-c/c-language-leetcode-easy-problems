// Null pointer is a pointer which has a value reserved for indicating that the pointer or reference does not refer to valid object . 
// the null pointer is guarenteed to compare unequal to any pointer that points to valid object . 
// dereferencing the null pointer is an undefined behaviour in c . and a comformating implemitation is allowed to assume that any pointed which is dereferenced is not null . 

// null pointe4r gives a functionality in c programmer to check whether the pointer is legitimate or not . 



// null pointer is a pointer which points to nothing (null)
//A null pointer should not dereferenced .         // the null pointer 
// a check must  be run by the c programmer to know whether the pointer is null before dereferncing it.         // null pointer now holds address of int 'x'




// use of nulll pointer 
// to initialize the variablel in cases where pointer variable has not been assigned any valid address yet.
//to chekc legitmate address location before accesing any pointer variable . 
//// by doing so , we can handle error handling while using pointers in c .
// Example of such error handling can be :dereference pointer variable if it is not null . 
// to pass  a null pointer to the function argument when we don't want to pass any valid memory address . 



// null macro is defined as (void*)0 in header files of most of the c files implementations . 
// Null pointer vs uninitialized pointer  - An uninitialized pointer contain an undefined value . 
// a null pointer stores the define value .which is the one decided by environment to not be the valid memory address for any object.
//NUll pointer vs VOID pointer : null pointer is a value whereas void pointer is a type . 


#include <stdio.h>
#include <string.h>

int main()
{
    int a = 34;
    int* ptr = &a;  
    // int *ptr = NULL;
    // printf("the address of a is %d",*ptr);                // try uncommenting this the program will crash.


    if(ptr!= NULL){
        printf("the address of a is %d \n",*ptr);
    }
    else{
        printf("the pointer is a null pointer and cannot be derefernced . ");
    }


    return 0;
}