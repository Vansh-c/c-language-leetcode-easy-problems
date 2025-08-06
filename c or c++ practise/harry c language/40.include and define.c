// the #include directive causes the preprocessor to fetch the content of some other file to be included  in the present file .
// This file may in turn #include other file which may in turn do the same.
// Most commonly #include file have ".h" extension indicating that they are header files. 

// In c , there are two common formats of include ,
//#include <headerfile.h>   // the angle bracket say to look into standard system directories 
// #include "myfile.h"    // the quotation marks say to look into current  directory

// Disk drive path is allowed  , but discouraged since it is not possible . 
// #include <sys/file.h>   // Relative and portable path to the standard location . 


// define directive is used to "define" preprocessor "variables" . 
// The #define preprocessor directive can be used  to globally replace a word with a number . ex: define PI 3.14
// It acts if an editor did a global search and replace edit to a file . 


// USING DEFINE FOR DEBUGGING . 
//define directory can be used for debugging , we can have print statements which we only want active during debugging. 
// we can protect them in a "ifdef" block as follows. 


// we can also create macros using #define . 
//Macros acts much like functions , but because they are expanaded in place and are generally faster . 



#include <stdio.h>
#define PI 3.14
#define square(s) s*s


int main()
{
    printf("the value of pi is given as %f \n", PI);
    printf("the area of the circle is %f", PI*square(3));
    return 0;
}
