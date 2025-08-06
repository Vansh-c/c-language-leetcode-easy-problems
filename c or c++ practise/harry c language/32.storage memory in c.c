// A storage class defines scope inital value and lifetime of a  variable 
// in previous lecture we saw that dynamic memory allcation is the way to change  size of the data structure during the runtime 
// memory assigned in a  program in a typical architecture can be broken down into : 
// 1. code   2.static/global variables  3.stack  4.heap



// storage class define following attributes 
// 1. scope : where will the variable be available . 
// default initial value 
// lifetime : for how much time variable can be used


// there are four types of storage classes :
// 1. Automatic variable    2.external variable      3.Static variable      4.Register variable  


// 1. automatic variable : auto storage class 
// scope : local to the function body they are defined in .
//Default value: Garbage value (random value)
// Lifetime: till the end of the function block they are defined in .
// A variable defined without any storage class specification is an automatic variable 
// ex: int harry and auto int harry are same .



// 2. External variables : external storage class . 
// same as global variables 
// scope: global to the program they are defined in . 
// Default initial value: 0 ;
//  lifetime : These variables are declared outside any function . They are available throughout the lifttime of the whole program 
// A global variable can be changed by any function in the program . 
//ex: int harry writter outside of the function will tell the compiler as global variables . 
// it is recommended to minimize the use of global variables in the program .   



// external varibale : extern variables 
// extern keyword is used to tell our C compiler that a given variable is declared somewhere else . 
// using extern will not allocate space for the variable 



// static variables : static storage class . 
// scope : local to the block they are defined in .
// Default initial value : 0 ;
// lifetime : they are available throughout the lifetime of their programs .
// static function exist for use only inside the funciton block .
 // ex:static int harry writtern inside any program inside compiler will tell harry is a static variable .
 // it  is recommended to minimize the use of unnecesary static variables in the program and it runs through out time program 
 // it is recommended to minimize the use of static variable inside the program 
 
 
 // Registered variables : registered storage class.
 // scope : local to the function they are declared in .
  // Defaul value: garbage value 
  // lifetime: they are available till the end of the function block in which the variable is defined . 
  // registered variables requests the compiler to store the variable in the cpu register instead of storing in the memory to have faster access.
  // Generally , they are done for the  variables which are used frequently.
  
  
  

  #include <stdio.h>
  #include "extern.c"

  int global = 88;    // this is global variable 


  myfunc(int a,int b){
     auto int sum;             // if I write auto int sum or int sum its both right and this is local variable
    sum = a + b;
    return sum ; 
  }


  int h(){
    static int myvar = 5;
    myvar ++ ; 
    printf("myvar is %d \n",myvar);
  }


int u(){
  extern int j;              // use of extern keyword.
  return j;
}




int main()
{
    // declaration : telling the compiler about the variable (no space reserved).
    // Definition : Declaration + space reservation .
    int sum = myfunc(4,56);                // local variable 
    printf("the sum is %d \n ",sum);
    printf("the global variable is %d \n", global);
    printf("\n");
    h();
    h();
    h();

    printf("the  use of extern variables is %d \n",u());


    register int blue =  myfunc(4,5);            // use of registered variable 
    printf("the use of registered variables is :%d",blue);
    return 0;
}