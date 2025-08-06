// write an array and reverse the given array 


#include <stdio.h>

int reversearr(int arr[]){

    int temp;
    for(int i = 0 ; i<5/2 ; i++){

        temp = arr[i];
        arr[i] = arr[4-i];
        arr[4-i] = temp;
    }
}


void arrayPrint(int arr[])
{
    for (int i = 0; i < 5; i++)
    {
        printf("The value of element %d is %d\n", i, arr[i]);
    }
}



int main()
{
    int arr[] = {1,2,3,4,5};
    arrayPrint(arr);
    printf("\n");
    printf("after reversing \n\n");
    reversearr(arr);
    arrayPrint(arr);


    printf("\n\n");

    
    



    return 0;
} 