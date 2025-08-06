// lets see about actual or formal parameters 
// when a function is called the values(expression) that are passed in the call are called arguments or actual parameters 
// Formal parameters are local variable which are assigned values from the arguments when the function is called 

//  In c we can call a value in two different ways 1: all by value    2: call by function 

// call by value :
// When we call a function by value , it means that we are passing the values of the arguments which are copied into the formal parameters of the function
// which means that orignal remain unchanged and only the parameters inside the function changes 

// call by reference :
//  The call by refernce method of passing arguments into the c function copies the address of the arguments into the formal parameters
// Addresses of the actual arguments are copied and then assigned to the corresponding formal arguments .

#include <stdio.h>

// function definition to sway the values 
void swap(int *x , int *y){
    int temp ; 
    temp = *x  ; // save the value at address x 
    *x = *y   ;  // put y into x 
    *y = temp ; // put temp into y
    return ;
    
}



void changevalue(int *address){
    *address = 345;
}


void new_value(int *a1,int *b1){
    *a1 = *a1 + *b1;
}

void new_val2(int *a1 , int *b1){
     *b1 = *a1 - *b1;
}


int main(){
    int a =34 , b = 74;
    printf("%d and %d \n",a, b);
    swap(&a , &b);                    // example through call by reference 
    printf("%d AND %d \n",&a , &b);

    printf("\n");
    int x = 34  , y = 56;
    printf("the value of a is now %d",x);
    changevalue(&x);
    printf("the value of a now is %d",x);

    printf("\n");
    int a1 = 4 , b1 = 6;
     new_value(&a1,&b1);
     new_val2(&a1 , &b1);
     printf("the new values are %d and %d",a1 , b1);


    return 0;



}