#include <stdio.h>

// variable: its like a container to store different things in it just like in python and javascript
// variable name starts with alphabets digits and underscore . Variable name can start with alphabet and underscore only
// no white space or reserved characters are allowed

// operators  in c are used for division , multiplication , addition and division 

int main(){

    printf("%lu \n",sizeof(int));              // here lu is used for unsigned long
    int a,b;
    a = 8;
    b = 7;
    // let  a = 8 ;                // also try these two lines
    //float b = 5.125;

    printf("a + b = %d  \n",a+b);         // addition 
    printf("a - b = %d \n",a-b);        // subtraction 
    printf("a * b = %d \n",a*b);      // multiplication operator
    printf("a / b = %d \n",a/b);      // basic division
    printf("a modulus b = %d \n",a%b);    // Modulus operator gives remainder basicaly 


    printf(" \n");

    // logical operator 
    int c,d;
    c = 8;
    d = 8;
    printf("The use of double ampersand operator is =%d \n ",c&&d);         // if both condition is true it will give 1 value and one of them or both of them is false then it will give 0 value
    printf("The use of double parallet line operators is = %d \n ", c||d);
    printf("The use of double parallet line operators is = %d \n ", !(c&&d));


      



    return 0 ;
}


// sizeof measures size in bytes of whatever text written inside it

// relational operators : generally used with if else statement which we will study later ex: "==" , "<=", ">=" , "!="

