// // statiscally allocated variables has fixed size 
//dynamic memory allocation is a way through which size of data structure can be changed during the runtime.
// memory assigned to the program in a typical architecture can be broken down into four segments . 

// 1.code
// 2.static / global varaibles
// 3.stack
// 4.heap


// dynamic memory allocation , the memory is allocated at runtime from the heap segment
// we have four functions which helps us to achieve the task .   malloc , calloc , realloc , free


// malloc : malloc stands for memory allocation,it reserves the block of memory with the given amount of bytes . 
// the return value is the void pointer to the allocated space . 
// hence void pointed is to be casted to the appropriate type as per the requirement . 
// however , if the space is insuffiecient , allocation of memory fails , it returns null pointer 
// All the values at allocated memory are initialized to garbage values. 

// Syntax : (ptr-byte*) malloc(size_in_bytes)



// calloc : calloc stands for contiguous allocation . It reserves n block of memory with the given amount of bytes.
// the return value is the void pointer to the allocated space . 
// hence , the void pointer needs to be casted to the appropriated type as per the requirements . 
// However , if the space is insufficient , allocation of memory fails and it returns a NULL pointer . 
// All the values at allocated memory are initialized to 0.
// syntax: (ptr-type*) calloc(n, size_in_bytes)



// realloc() : realloc() stands for reallocation . 
// if the dynamically allocated memory is insufficient , we can change the size of previously allocated memory using realloc() function .
// syntax : (ptr - type*) realloc(ptr , new_size_in_bytes).



// free(): free() is used to free the allocated memory . 
// If the dynamically allocated memory is not required anymore , we can free it using free function . 
//This will free the memory being used by the   program in the heap . 
// syntax : free(ptr)




#include <stdio.h>
#include <stdlib.h>

int main()
{
    // use of malloc 
    int* ptr;
    int n;
    printf("Enter the size of array you want to create \n");
    scanf("%d",&n);
    // ptr = (int*) malloc(n*sizeof(int));         // n size ka dynamic array ban jaega.
    // ptr = (int*) malloc (10*sizeof(int))

    // use of callop 
    ptr = (int*) calloc(n , sizeof(int));

    for(int i = 0 ; i<n ; i++){

        printf("Enter the value at %d of this array: \n",i);
        scanf("%d",&ptr[i]);
    }

    
    for(int i = 0 ; i<n ; i++){

        printf("Enter the value at %d of this array is %d\n",i,ptr[i]);

    }






    printf("below is using reallocate and  free memory allocation programs. \n\n");




    printf("Enter the size of array you want to create \n");
    scanf("%d",&n);
    // ptr = (int*) malloc(n*sizeof(int));         // n size ka dynamic array ban jaega.
    // ptr = (int*) malloc (10*sizeof(int))

    // use of callop 
    free(ptr);
    // ptr = (int*) realloc(ptr , n*sizeof(int));
    ptr = (int*) calloc(n , sizeof(int));               // this will run because of free(ptr operator)


    for(int i = 0 ; i<n ; i++){

        printf("Enter the new  value at %d of this array: \n",i);
        scanf("%d",&ptr[i]);
    }

    
    for(int i = 0 ; i<n ; i++){

        printf(" the new value at %d of this array is %d\n",i,ptr[i]);
    }


    return 0;
}