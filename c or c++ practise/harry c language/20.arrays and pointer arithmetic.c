// there are four types of  operators that can be used on pointers ex: ++ , -- , *,-


#include <stdio.h>

int main()
{
    int a = 77;
    int* ptra = &a;
    printf("%d \n",ptra);
    printf("%d \n",ptra + 1);    // here one will not be add but size of 1 be add which is 4
    printf("%d \n",ptra + 2);      // here size of 2 will be add which is 8
    printf("%d \n",ptra + 12);      // here size of 12 will be added which is 48   
    ptra++ ;                     // adds one but size of it
    printf("%d \n",ptra);
         


    char b= '3'; 
    char* ptra2 = &b;
    printf("%d \n", ptra2);
    printf("%d \n",ptra2 - 1 ) ;   // size of 1 wil be subtracted which is 1 byte
    printf("%d \n",ptra2 - 2);    // size of 2 will be subracted which is 2 byte
    printf("%d \n",ptra - 12);    // size of 12 will be subtractee which is 12 byte
     ptra2--;                       // it subtracts one but size of it
    printf("%d \n\n\n",ptra2);


    printf("lets see how pointers can be used with array \n\n");
    int arr[] = {1,2,3,4,5,6};
    int* arrayptr =arr;

    printf("%d \n",arr[0]);
    printf("%d \n",arr[3]);
    printf("the addresss of first element of the array is %d \n",&arr[0]);
    printf("the addresss of first element of the array is %d \n",arr);
    printf("the addresss of first element of the array is %d \n",&arr[1]);
    printf("the addresss of first element of the array is %d \n",arr + 1);

    printf("\n");

    printf("the value of addresss of first element of the array is %d \n",*(&arr[0]));
    printf("the value of addresss of first element of the array is %d \n",*(arr));
    printf("the value of addresss of first element of the array is %d \n",*(&arr[1]));
    printf("the value of addresss of first element of the array is %d \n",*(arr + 1));

    printf("\n");
    arrayptr++ ;           // we cant write arr++ hence we made pointer to arr and on that pointer the given operations ++ and -- is applicable
    printf("%d \n",arrayptr);



    return 0 ;
}


// int takes 4 bytes = 16 bits 
// cbar take one byte = 8 bits