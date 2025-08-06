// preprocessor is a kind of automated editor which modifies a code of orighnal source code . 
// #include directive causes the preprocessor to fetch the contents of some other file to be include in the present file . 
// In C programming there are two main formats for #includes : 
// This file may in turn include some other files which in turn do the same . 
// Most commonly the #included files have a ".h" extension , indicating that they are header files . 
// The #define directive is used to define preprocessor 'variables' . 


// there are other preprocessor commands like undef(undefines the macro) , #ifdef(if define) , #ifndef(if not defined )
// #if , #else , #elif , #pragma(pragma is used to issue some special commands to the compiler).




// PREDEFINED MACROS IN C
// __Date__ : to show date in format MMM DD YYYY
// __TIME__ : this contains current time in the character literal in "HH:MM:SS" format . 
// __FILE__: the current filename of string literal . 
// __LINE__: the current line number as the decimal constand . 
// __STDC__ : Defined as I(one) when the compiler compiles with the ANSI standared . 



#include <stdio.h>
#include <stdlib.h>

int main()


{
    printf("the current file name is : %s \n", __FILE__);
    printf("todays date is : %s \n",__DATE__);
    printf("the current time is : %s \n",__TIME__);
    printf("the curret line number is =  %d \n",__LINE__);
    printf("ANSI =  %d \n",__STDC_UTF_16__);

    return 0 ;
}