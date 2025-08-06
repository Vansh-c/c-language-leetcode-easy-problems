//  String is not a supported data type in c but it is very useful concept to model real world entities like name , city , etc
//we express string using  an array of character terminated by a null character ("\0")


// string is array of character terminated by null character 
//strings in c are created b using array of characters 
// we need an extra character('\0' or null character) to tell a computer that string ends here

// we can create array in the following ways 
// char name[] = "harry"
// char name[] = {'h','a','r','r','y','\0'}
// string array always end by null character


#include <stdio.h>

void printstr(char str[]){
    int i = 0;
    while(str[i] !='\0'){
        printf("%c",str[i]);
        i++;
    }
}

int main()
{
    char str[] = {'h', 'a','r', 'r', 'y','\0'};            // we have to add backslash 0 at the end to make the given array into the string
    printstr(str);

    // below is another way to write arrays 
    printf("\n");

    char new_str[] = "Vansh";
        // char new_str[5] = "Vansh";                    // it will give output VanshN because the given string was not able to terminal at null hence we should write 6 inside square bracket
        // char new_str[6] = "Vansh";              // this output will not give us Vansh

 
    for(int i = 0 ; i<sizeof(new_str);i++){
        printf("%c",new_str[i]);

    }


    // below is using get and put method

    printf("\n");
    char strg[34];
    gets(strg);                 // to enter input inside  the  string
    printf("using printf to print :  %s\n",strg);
    printf("using puts : \n");
    puts(strg);
    return 0;
}
