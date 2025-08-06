#include <stdio.h>


int main()
{
    int arr[2][2] = {0};
    
    for(int i = 0 ; i<2 ; i++){
        for(int j = 0 ; j<2;j++){
            scanf("enter values of a and b %d %d \n",&arr[i][j]);
            printf("%d  ", arr[i][j]);
        }
        printf("\n");
        }

        return 0;
}