// an array is a collection of data items of same types 
//items are stored in contegous memory locations 
//it can also store derived data types like pointers ,structures etc.
// a one dimensional array is like a list.
//two dimensional array is like a table 
//c language no limits to amount of dimentsions store in  a array.
// some text refers to one dimensional array as vectors, two dimensional array as matrices , and use the general term array when the term array is unspecified 



// why do we needs arrays :
//coes that use array are more organized and readable
//if you were to make list of marks of 56 student , then 56 varaible will make the function cluttered and messy and solutions to this is array
//we can create array of integers and store the consecutive marks corresponding to the roll number of the array.


// advantage of array
// it is used to store multiple data items of same type by using only single name 
// Accesing an item from a given array is very fast 
//2 dimensional array makes it easy in mathematical applications and it is used to represent a matrix 


// properties of array 
// Data in a array is stored in contigous memory location .Each element of array is of same size 
//Any element of an array with a given index can accessed very quickly by using its address which can be calculated using the base address and the index.


// syntax for arrays 
// data_type name[size]
// data_type name[size] = {x,y,z .....}   //size not required in this case 
//data_type name [rows][columns]  // for 2d arrays 
// we can also initialize an array one by one by using its index ex: name[0] = 0


#include <stdio.h>

int main()
{
    int marks[4];     // ye marks 4 number ko apne andar jagah dehga 
    marks[0] = 34;
    printf("marks of student 1 is %d\n",marks[0]);
    marks[0] = 94;
    printf("marks of student 2 is %d\n",marks[0]);

    printf("\n\n");

    int a[3] = {444,65,898};       // this is how one can initialize a array
    for(int i = 0 ; i<3 ; i++){
        printf("the given arrays elemets are %d\n",a[i]);
    }

    printf("\n\n");
    int s[3];
    for (int i = 0 ; i<3 ; i++){
        printf("enter the value of %d element of the array \n");
        scanf("%d",&s[i]);
    }

    for (int i = 0 ; i<3 ; i++){
          printf("the value of %d element of an array is %d\n",i,s[i]);
    }


    printf("\n\n");
    printf("lets see about 2d matrix\n");

    int line[2][4] = {{4,5,66,7},{3,2,2,3}};

    for(int i = 0 ; i<2 ; i++){
        for(int j = 0 ; j<4 ; j++){
            // printf("the value of %d,%d elements of the array is %d \n",i,j,line[i][j]);
            printf("%d ",line[i][j]);              // to write in form of perfect matrix 
        }
        printf("\n");
    }

    return 0;

}