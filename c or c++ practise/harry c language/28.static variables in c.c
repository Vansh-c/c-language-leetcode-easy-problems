// note: prior knowledge of local and global variables required 

// static variabls are values which have a property of preserving their values when they go out of scope.
// they preserve their value from their previous scope and cannot be initialized again
//static variables remains in memry throughout the span of program.
//static variables are initialized to 0 , if not initialized  explicitly.
// In c  , static variables can only be intialized by using constant literals .

// example : static int harry = 7    // the syntax is static data-type name = value


#include <stdio.h>

int func1(int b1){
    static int myvar = 98;
    printf("the value of myvar is %d \n",myvar);
    myvar++;
    // printf("the value inside func1 is %d \n",b);
    // printf("the address of b inside func1 is %d",&b);
    return b1 + myvar;
}

int main()
{
    int b = 344;
    int val = func1(b);
    val  = func1(b);
    val  = func1(b);
    val = func1(b);
    val = func1(b);
    int*ptr = &val;
    // printf("the value of func1 is %d",val);
    return 0;
}