#include <stdio.h>                                  /* this first  line tells the compiler that we want stdio.h file so wo humko lakar do */

int main()              /*int hair wo integer hai aur 'main' function hai which means main function hai wo int return karega aur wo int operating system ke pass jaega*/
{
    printf("Hello World\n");                      // semicolon is used to terminate a statement , printf is taken from <stdio.h> file
    printf(" krish and anubhav \n ");
    // here below is another code 
    int a, b;
    printf("Enter number a\n ");
    scanf("%d",&a);
    printf("Enter number b\n");
    scanf("%d",&b);
    printf("the sum is %d\n", a+b);
    return 0;
}


// if one wants to add another file then add gcc .\1.main.c -o vansh to get vansh.exe text file

// there are four proceesses involved 1. preprocessing 2.compilation 3. assembly 4.linking

// first write 'gcc -wall -save-temps main.c -o harry'
// preprocessing : comments are ignored kiya jata hai , stdio ke content ko ek file mein rakha jata hai and macros expand hota hai and its gets saved in .i file
// .i file mein preprocessed output hota hai


// assembly: here in this process our whole code gets converted into assembly level language which is in .s file and gets converted into machine language code

//linking: ye sari .o file ko uthakar ek executable file mein bana deti hai which in this case is vansh.exe or a.exe(generally)