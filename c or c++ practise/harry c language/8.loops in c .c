// loops are used to print the function again and again until condition inside it fails 
// there are three types of loop 1.do while loop   2. while loop   3.for else loop     
// the advantages of using loop is to provide reliability ,  tranverse coding and code reusability 


// let's talk about do while loop . In this loop code will be executed once even if the condition is false 

#include <stdio.h> 

int main()
{
    int num , index = 0 ; 
    printf("Enter a number \n");
    scanf("%d",&num);

    do{
        printf("%d\n",index+1);
        index = index +1;
    }
    while(index<num);

    return 0;


}