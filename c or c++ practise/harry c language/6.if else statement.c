// if-else statement is used to perform operations based on conditions 
// types of if else : 1). if statement 2).if else statement 3). if else if ladder 4).nested if else statement

#include <stdio.h> 

int main()
{

    int age;
    printf("Enter your age \n");
    scanf("%d",&age);
    printf("You have entered %d as your age \n",age);

    if(age>18){
        printf("You can vote \n");
    }
    else{  printf("you cannot vote if your age is less than 18 \n");}


    // below is example of else if statement 



    printf("==> Below is example of else if statement \n");
    int c;
    printf("Enter your age \n");
    scanf("%d",&c);
    printf("you have entered %d as your age \n",c);
    if(c>10){
        printf("you can drink soft drinks \n");
    }
    else if(c=10){
        printf("kiddo you have to wait for your chance to drink soft drink \n");
    }
    else{
        printf("you cant drink softdrinks and only allowed to drink water \n");
    }



    // exercise: write a program to distribute gifts to 3 types of people 1st for people who passed both maths and science , 2nd to the ones who passed only either of maths or science
    int math , science ;
    printf("Enter your maths marks \n");
    scanf("%d",&math);
    printf("Enter your science marks \n");
    scanf(" %d",&science);


    if(math>40 && science>40){
        printf("congratulations , you won 40 rupees");
    }
    else if(math>40 || science>40){
        printf("congratulations , you won 15 rupees");
    }
    else{
        printf("Sorry , no gift for you");
    }

    return 0;
}