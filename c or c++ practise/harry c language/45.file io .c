// when working with files we have to declare a pointer of type file . 
// the declaration helps us to work with file through c program . 

// <stdio.h> conains function to open files in c 
// syntax : fopen("fileopen", "mode")


// CLOSING A FILE 
// Any file which is opened is to be closed 
// closing a file can be done by function fclose()
//   fclose(ptr )       //  ptr is a pointer associated with the file to be closed . 

//READNG A FILE 
// in order to read a file we can use fscanf function . 
// This function is file version of scanf function . 
// fscanf expects a file pointer in addition to the other arguments which scanf expects . 
// we will have to open this file in read mode in order to use this function. 

//writing a file 
// In order to write a file we can use fprintf function which is file version of printf function . 
// fprintf expects a file pointer in addition to the other arguments which printf expects . 
// We will have to open this file in write mode in order to use this function . 


#include <stdio.h>


int main()
{
    FILE *ptr = NULL ;
    char string[84] = "This content was produced by vanshbhai joshi";


    // *****READING A FILE ******
    // ptr = fopen("myfile.txt","r");
    // fscanf(ptr , "%s" , string);
    // printf("the content of the file has %s \n",string);  // it will only read first letter of the given file 


    // ********WRITING A FILE ******* 

    ptr = fopen("myfile.txt","w");
    fprintf(ptr , "%s" , string);



    return 0;
}