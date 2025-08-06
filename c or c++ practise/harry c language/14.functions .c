// functions are used to break large programs into smaller pieces 
// a function can be called multiple times , to provide reusability and modularity to the c program 

// basic syntax ; return_type  function_name (data type parameter 1 , data type parameter 2 ..)

// advantages : 
//to avoid rewriting same logic throughtout the program
//we can divide work among programmers using functions
//  we can easily debug the programs using function


// declaration , definition and call 
//A function is declared to tell the funcition about its existence
//A function is defined to get some task done 
// A function is called  in ordered to be used .



// types of functions 1:Libraryl function   2:user defined functions 
// library function P: functions included in c header files 
// user defined functions : functions created by user to reduce the complexity of the programmer 

#include <stdio.h>

int sum(int a , int b);     // this is declaation of the function , now if we write function anywhere whether after main function or inside main function there will be no error



int bankai(){                 // function without argument and without return value
    printf("the name of the bankai is bankai , getsugaaaa tenshououuuuu!!!");
};


void printstar(int n){              // functon with argument without return value
    for (int i = 0; i<n ; i++){
        printf("%c",'*');
    };
};



int takenumber(){                    // function without argument and with return value
    int i;
    printf("enter a number \n");
    scanf("%d",&i);
    return i;
}



int sum(int a , int b){                   // function with argument and with return value
    return a+b;
};



int main()
{
    int a,b , c;
    a = 8;
    b = 99;
    c = sum(a,b);
    printf("%d \n",c);
    printstar(5);
   int p =  takenumber();
    printf("the entered numbler is %d \n",p);
    bankai();
    return 0;
}