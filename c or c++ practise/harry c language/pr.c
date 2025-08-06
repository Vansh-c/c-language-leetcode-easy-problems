#include <stdio.h>

int main()
{
    int arr[3];
    int reverse[3];

    for(int i = 0 ; i<3 ; i++){
        scanf("%d",&arr[i]);
    }

    printf("\n\n\n");

    for(int i = 2 ; i>=0 ; i--){
       reverse[2-i] =  arr[i];
       printf("%d",reverse[2-i]);

    
       if(reverse[i]== arr[i]){
        printf("itsis a palinddro\n");
       }
       else{
        printf("it is not a palindrome \n");
       }
    }

  

    
}