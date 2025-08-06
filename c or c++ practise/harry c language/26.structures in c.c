// structues are user defined data type in c 
// using structures we can combined data of different types together 
//it is used to create complex data type which contains diverse information 
//they are similar to arrays but structure can store data of  any type , which is practically more useful

// similar in array to be accessed using subscript variable(arr[0]) in the same way  structure memebers can be accessed using dot[.] operator
//to access member of the structure we use 'structure name' or 'member name' . 



#include <stdio.h>
#include <string.h>

struct student 
{
    int id;
    int marks ;
    int fav_char;
    char name[34];
};

struct student harry , krishna , vansh ;               // here we used function as a global variable 

int main()
{
    // struct student harry , krishna , vansh;                // here we use  our data type as a local variable
    harry.id = 99;
    krishna.id = 98;
    vansh.id = 90;

    harry.marks = 88;
    krishna.marks = 90;
    vansh.marks = 89;

    harry.fav_char = 'o';
    krishna.fav_char= 'i';
    vansh.fav_char = 'h';

    printf("Vansh got %d marks \n",vansh.marks);
    strcpy(harry.name , "Harry potter student of the year");
    printf("harry's name is : %s \n",harry.name);
    strcpy(krishna.name , "this is Vasudeva lord Krishna");
    printf("the name of lord of the universe:%s \n", krishna.name);

    // quick quiz : print all the information of the given student




    return 0;
}