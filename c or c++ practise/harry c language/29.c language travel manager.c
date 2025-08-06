/*
You manage a travel agency and you want your n drivers to input their following details:
1. Name
2. Driving License No
3. Route 
4. Kms
Your program should be able to take n as input(or you can take n=3 for simplicity) and your drivers will start inputting their details one by one.

Your program should print details of the drivers in a beautiful fashion.
User structures.
*/


#include <stdio.h>


struct Driver
{
    char name[34];
    char dlno[34];
    char route[47];
    int kms;
};

int main()
{
    struct Driver n;
    int amount;
    printf("enter the amount of people who wants to be registered :");
    scanf("%d",&amount);

    for(int i = 1 ; i<amount;i++){
        printf("enter the name of %d driver:\n",i);
        scanf("%s",&n.name);

        printf("enter the driver license number of %d driver:\n",i);
        scanf("%s",&n.dlno);

        printf("enter the route of %d driver:\n",i);
        scanf("%s",&n.route);

        printf("enter the amount of kilometer of %d driver:\n",i);
        scanf("%d",&n.kms);


        printf("the name of the driver is : %s \n",n.name);
        printf("the driver license number  of the driver is : %s \n",n.dlno);
        printf("the route of the driver is : %s \n",n.route);
        printf("the kilometer travelled by the driver is  : %d \n\n\n",n.kms);
   
    }

    return 0;
}
        
        


