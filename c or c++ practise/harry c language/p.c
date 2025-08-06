#include <stdio.h>

int main()
{
    int a[3][3] , b[3][3], result[3][3];
    int multiplication = 0;

    for(int i = 0 ; i<3 ; i++){
        for(int j  = 0 ; j<3 ; j++){

            scanf("%d \n", &a[i][j]);
        }
    }

    printf("enter the second matrix \n\n\n");



    for(int i = 0 ; i<3 ; i++){
        for(int j  = 0 ; j<3 ; j++){

            scanf("%d  \n", &b[i][j]);
        }
    }


    for(int i = 0 ; i<3 ; i++){
        for(int j = 0 ; j<3 ; j++){
           for(int k = 0 ; k< 3 ; k++){
             multiplication = multiplication + (a[i][k])*(b[k][j]);
            }

            result[i][j] = multiplication;
            multiplication = 0;
        
        }

        
    }

    printf("the resulot is interpreted below \n\n");


    for(int i = 0 ; i<3 ; i++){
        for(int j = 0 ; j<3 ; j++){
            printf("%d \t",result[i][j]);
        }
        printf("\n");
    }

    return 0 ;
}