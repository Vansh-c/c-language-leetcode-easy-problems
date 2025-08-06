

#include <stdio.h>

int main()
{
    int i ,age ;
    for(i = 0 ; i<5 ;i++ ){
        printf("%d\n Enter your age \n",i);
        scanf("%d",&age);


        // if(age>10){
        //     break;
        // }                              // uncomment this code and comment he continue statement code to see break statement and run    

         if (age>10)
        {
            continue;
        };

        printf("We have not come across any continue statements ");

        
    };

    return 0 ;

}

//  break statement will stop that for loop inside which it is written in case of nested for loops .
// continue statement skips some code inside the loop and jumps to the next iteration of the loop directly.


// break statement ka matlab hai loop ke bahar phek diya jae.
// conitnue statement next line of codes ko skip karke next iteration mein jump karta hai