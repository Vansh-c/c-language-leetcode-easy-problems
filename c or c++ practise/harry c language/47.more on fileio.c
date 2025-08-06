// stdio.h contain the function called fopen for opening files in c 
// When working with files we have to declare the poineter named FILE.This delaretion helps us to work with files in c . 
// SYNTAX : fopen("fileopen","mode")
// In order to read/write to a file we use fscanf/ fprintf function.
// fclose(file)   to close the give  running file. 


// MODES OF FILES 
// r: opens an existing file for reading . 
// w: Open file for writing , if the given file does'nt exist then a new file is created . 
// a : Opens a text file for writng in appending mode  ,if file does'nt exist then a new file is created. 
// r+ : this mode will open text file for both reading and writing . 
// w+ : opens the text file for reading and writing . It  first truncates the file length into 0 length , if it exists . Otherwise creates a file if it does'nt exist . 
// a+ : opens the file for both reading and writing . It creates a file if it does'nt exist . The reading will start from the beginning but the writing is used to append the file . 


// there are various functions provided in c funciton library to read and write a file like fprintf and fscanf   .
// they are fputc(c stands for character) , fputs(s stands for string) , fgetc and fgets 

// simplest function to write character  to the file is fputc . 
// syntax : int fputc(character ,  filepointer)
// it returns the written characters written on  success.
//on failure it returns EOF , where EOF is a constant defined in a header file <stdio.h>


// fputs in c 
// fputs is used to write null terminated string to a file in c 
// int fputs(const char*s) , File*fp)

// simplest function to read from a file is fgetc . 
// syntax: int fgetcL(file,int n ,  fp)   {int n is number of character to read }

//fgets is used to read null terminated string to a file in c 
// syntax : int fgets(const har*s , FILE*fp)


#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *ptr = NULL;
    ptr = fopen("myfile.txt", "r");

    char c = fgetc(ptr);
    printf("the character I read was %c\n",c);
     c = fgetc(ptr);
    printf("the character I read was %c\n",c);

    fclose(ptr);
    // use of fgets 

    char str[34];
    fgets(str , 3 , ptr);
    printf("the string is %s \n",str);


    //example of fputc
    ptr = fopen("myfile.txt" , "w");
    fputc('c',ptr);
    fputs("this is vansh who enjoys coding ",ptr);
    fclose(ptr);


    // use of others file notations 
    FILE *ptr2 = NULL;

    // fopen("g.txt",'w+');
    // char str2[5];
    // fgets(str2 , 3 , ptr2);
    // printf("the string is %s \n",ptr2);

    return 0;
}


