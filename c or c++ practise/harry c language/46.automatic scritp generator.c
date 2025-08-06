// write a automatic script generator 

#include <stdio.h>

int main()
{

    FILE *lt = NULL;
    char words[59] = " Thanks {{name}} for purchasing {{item}} from our outlet";

    lt = fopen("letter.txt", "w");
    fprintf(lt , "%s" , words);


    return 0;
}