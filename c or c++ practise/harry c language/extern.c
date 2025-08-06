
#include <stdio.h>

void main(){

    int n ; 
    long int fact ; 
    scanf("%d",&n);

    while(n>0){
        for(int i = 1 ; i<=n ; i++){
          fact  = 1;
          fact = fact*i;}
      }
      
      printf("The Factorial of %d is : %ld",n,fact);
      
      
}
