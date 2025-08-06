// rules of switch case statement 
// switch case statement is for integer or character
//case value must be integer  or character 
//case must come inside switch
//break is not a must 

#include <stdio.h>

int main()
{
    int a;
    printf("enter the value of a:");
    scanf("%d",&a);

    switch(a){
        case 4:
            printf("the entered value is 4 \n");
            break;

        case 6:
            printf("the entered value is 6 \n");
            break;

        case 8:
           printf("the entered value is 8 \n");
           break;

        default:
            printf("Enter either 4 or 6 \n");
            break;
    }


    printf("/n");
    // below is example of nested switch case statement

    int b,marks;
    printf("Enter the value of b : ");
    scanf("%d",&b);


    switch(b){
        case 1:
             printf("Enter your marks : ");
             scanf("%d",&marks);
            switch(marks)
               {
                case 45:
                printf("congratulations , you pass \n");
                break;
                default:
                printf("You can do it next time \n");
                break;
                }
                break;
        case 2:
           printf("the enterd value is 2");
           break;

        default:
           printf("enter value either 1 or 2 only for this switch case statement to work");
           break;
    }
    return 0;
}