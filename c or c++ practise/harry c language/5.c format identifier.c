// format specifier is a way to tell the computer what type of data is in  a variable during taking input and displaying output to the user

#include <stdio.h>
#define PI 3.14                        // this is another way to define const

int main()
{
    int a = 5;
    float b = 5.987;
    printf("the value of a is %d and the value of b is %f \n",a,b);
    printf("the value of a is %d and the value of b is %0.5f \n",a,b);         // here 0.5 we wrote after percentage which means the given line will show 5 decimal digits and 0 whitespaces 
    printf("the value of a is %d and the value of b is %10.3f \n",a,b);    // here 10.3 means its will show 3 digits after decimal point and 10 whitespaces
    printf("%-12.4f this ",b);                                      // it will go -12 spaces back and will print the number upto 4 decimal spaces
    printf("");
    printf("==> below is use of const keyword \n");
    const float c = 8.343;
    // c = 4.333 ;                       // here we will get error which shows const variable cannot be changed
    printf("the value of c is %f \n",c);
    printf("%f \n",PI );                   // we use define method to make PI constant .

    // escape sequences in c language . It doesn't represent itself when used inside string literal or character . ex. \n  represent new line ,\t for tab 
    // \a for alarm or beep , \b for backspace

    printf("this is backslash \\") ;// this is use of double backslash escape sequence





    return 0;
}


// %d is percentage decimal specifier for signed decimal integer
// %f is percentage specifier for floating point number 


// %d is used to print integer value in c
// %f is used to print floating point integer in c
// %c is used to print characters in c
// %l is used to print long intergers 
// %lf is used to print long double


// constant: it is value or variable that can't be changed in the program . for example 15, 23 , 'a' , 3.4 
// there are two ways to define const 1. const keyword   2. define preprocessor 