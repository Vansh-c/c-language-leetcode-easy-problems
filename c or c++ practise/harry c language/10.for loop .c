// for loop is used to iterate the statement or part of the program 
// used to traverse the arrays or list in c language . 


#include <stdio.h>

int main()
{
    int i ,j;

    for(i=0 ,j=0; i<9 ; i++){
        printf("%d %d\n", i+1,j);
    };
       

    printf("\n");
    // expression 1 can also be initialized 
     int k =0;
     for(; k<6; k++){
        printf("%d\n",k);
     };

     // more than two condition can be added in loop 
     printf("\n");

     for(i=0,j=0;i<5,j<3;i++){                       // here j<3 will be taken as last condition 
        printf("%d %d\n",i,j);
        j++;
     };

     printf("\n");

          for(i=0,j=0;j<3,i<5;i++){                  // here i<5 will be taken as lst condition 
        printf("%d %d\n",i,j);
        j++;
     };

    return 0 ;


}