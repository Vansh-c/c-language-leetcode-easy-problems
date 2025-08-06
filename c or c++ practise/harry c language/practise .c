#include <stdio.h> 


struct emp{
    char name[50] ; 
    int id ;
} ; 

int main()
{
    struct emp v ; 
    fgets(v.name , 50, stdin) ; 

    scanf("%d" , &v.id) ; 

    printf("%s" , v.name) ; 
    printf("%d" , v.id) ; 

    return 0 ;
}


