// typedef in c is a type of datatype which is used to give alternating names to existing datatypes.

// syntax : typedef <previous_name> <alias_name>

#include <stdio.h>

typedef struct student
{
    int id;
    int marks ;
    char fav_char;
}std;


int main()
{
    typedef unsigned long ul;
    typedef int integer;
    integer a = 5;
    printf("the value of a is %d \n",a);
    std s1 , s2;
    s1.id = 4;
    s2.id = 8;

    printf("the value of s1 id is %d \n",s1.id);
    printf("the value of s2 id is %d \n",s2.id);

    typedef int*  intpointer ;
    intpointer a1 , b1;
    int c = 89;
    a1 = &c;
    b1 = c;
    printf("the a is %d \n",a1);
    printf("the b is %d \n",b1);

    return 0;
}