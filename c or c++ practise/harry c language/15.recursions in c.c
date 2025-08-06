//   recursive function or recursion is a process when a function calls a copy of itself to work on small problem .
// any function which calls itself is a recursive function 
// this makes life of a programmer easy by dividing the function into easier problem . 
// A termination condition is imposed on such functions to stop them executing copies of themselves forever 
//Any problem which can be solved recursively can also be solved iteratively.


//why recursions?
//Any problem which can be solved recursively can also be solved iteratibly 
// however , some problems are suited to be solved recursively 
// ex: tower of Hanoi , fibonacci series , factorial finding 


#include <stdio.h>

int factorial(int number){
    if(number ==0 || number == 1){
        return 1;
    }
    else{
        return number*factorial(number - 1);
    }
};

int main(){
    int num;
    printf("Enter the number you want to find the factorial of \n ");
    scanf("%d",&num);
    printf("the factorial of %d is %d \n",num,factorial(num));
    return 0;
}


  