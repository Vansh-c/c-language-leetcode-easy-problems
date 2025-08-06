// dangling pointer is a pointer pointing to the free memory location or the location whose content has been deleted is called dangling pointer.
// dangling pointer arise during object destruction when an object that has an incoming reference is deleted or deallocated , 
// without modifying the value of the pointer so that the pointer still point to the memory location of the deallocated memory . 

// causes of dangling pointer . 
// deallocation of memory 
// Returning local variables in function calls. 
// Variables going out of scope.


// deallocation of memory 
// when memory is deallocated , the pointer keeps pointing to the freed space .


// dangling pointer introduce nasty bugs in your c program.
// Dangling pointer bug frequently become security hole at times .
// we can avoid issues by dangling pointer by initializing the pointer to NULL . 
// After deallocating memory , the pointer will no longer be dangling . 
// Assigning NULL value means pointer is a null pointer now . 


#include <stdio.h>
#include <stdio.h>


int* functionDangling(){
   int a = 34;
   int   b= 99;
   int sum = a+b;
    return &sum;
}

int main()
{
    // case1 : deallocation of the memory block 
    int *ptr = (int*)malloc(7*sizeof(ptr));
    ptr[0] = 34;
    ptr[1] = 99;
    ptr[2] = 8;
    ptr[3]= 77;
    free(ptr);  

    // case 2: function returning local variable address . 
    int *dangptr = functionDangling();       // dangptr is not a dangling pointer since it is returning the address of given variable sum which is local variable . 


    // case 3 : if a variable goes out of scope 
    int* danglingptr3;
    {
        int a = 34; 
        danglingptr3 = &a;
    }

    // here variable a goes out of scope which means , danglingptr3 is pointing to a location which is freed and hence , 
    // danglingptr3 is now  a dangling pointer. 



    return 0;
}