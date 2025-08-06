// units conversation the compute will ask the user about which unit it has to convert 
//km to miles 
//inches to foot 
//cms to inches 
//pound to kgs 
//inches to meters 


#include <stdio.h>
int kiltomil(){
    int kg;
    printf("enter amount of kilogram for conversation :\n");
    scanf("%d",&kg);
    return  kg/1.609;
};

int inchefoot(){
    int inch;
    printf("enter the amount of inch for conversation into foot: \n");
    scanf("%d",&inch);
    return inch/12;
}

int cminches(){
    int cm;
    printf("enter the cms which to be converted into inches\n");
    scanf("%d",&cm);
    return cm/2.54;
}

int poundtokg(){
    int pounds;
    printf("enter the amount of pounds which to be converted into kg\n");
    scanf("%d",&pounds);
    return pounds/2.205;
}


int inchtometer(){
    int inch;
    printf("Enter how much inches is to be converted into meter");
    scanf("%d",&inch);
    return inch/39.37;
}


int main(){
int num;
printf("enter 1 fof km to miles \n2 fo inche to foot \n3 for cms to inches \n4 for pound to kg \n5 fo inches to meters:\n");
scanf("%d",&num);

if(num == 1){
    printf(" given kg is converted into %f miles",kiltomil());
}
 
else if (num == 2)
{
    printf("given entered number of inches is converted into %f foot",inchefoot());
}

else if(num == 3){
    printf("the entered cm is converted into %f inches",cminches());
}
else if(num == 4){
    printf("the enterd amound of pound is converted into %f kg",poundtokg());
}

else if(num == 5){
    printf("the enterd inch is convereted into %f meters",inchtometer());
}
else{
    printf("the enterd numbers must be in range from 1 to 5");
};

return 0;

}
