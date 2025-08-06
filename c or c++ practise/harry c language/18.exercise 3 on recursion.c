// fibonacci series using recursive function 


#include <stdio.h>


int fib_recursive(int num){

     if( num == 1 || num == 2){
        return num - 1;}

     else{
        return  fib_recursive(num-1) + fib_recursive(num-2);
     }
    }


int fib_interactive(int num)
{

    int a = 0;
    int b = 1 ; 

    for(int i = 0 ; i< (num - 1); i++){
        b = a + b;
        a = b - a;
    }
    return a;
}



int main()
{    

      int enternum;
        printf("enter a number for which you want to find fibonacci series:\n");
        scanf("%d",&enternum);
    printf("the fibonacci series of entered number %d using loop method is %d : ",enternum,fib_recursive(enternum));
    printf("the fibonacci series of enter number %d using iteractive method is : %d",enternum , fib_interactive(enternum));
    return 0;
}