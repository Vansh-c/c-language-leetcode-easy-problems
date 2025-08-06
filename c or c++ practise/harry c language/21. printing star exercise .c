//  take input from user to ask user to choose 0 for and 1 for triangular star pattern 

#include <stdio.h>

void starpattern(int rows){
    for(int i = 0 ; i<rows ; i++){
        for (int j = 0 ; j<i ; j++){
            printf("*");
        }
        printf("\n");
    }
}


void reversestarpattern(int rows){
    for(int i = 0 ; i< rows ; i++){
        for(int j = 0 ; j < (rows - i); j++){
            printf("*");
        }
        printf("\n");
    }
}

int main()
{
    int rows;
    int num ;
    printf("enter 0 for star patter and 1 for reverse star pattern \n");
    scanf("%d",&rows);
    printf("enter which you want 0 for starpatter and 1 for reverse star pattern \n");
    scanf("%d",&num);
    if(num == 0 ){
        starpattern(rows);
    }
    else if(num == 1){
        reversestarpattern(rows);
    }
    else{
        printf("the entered number must be either 0 or 1");
    }

    return 0;
}