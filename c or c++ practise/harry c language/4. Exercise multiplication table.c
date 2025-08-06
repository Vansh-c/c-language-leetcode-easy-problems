#include <stdio.h>

/*Print a multiplication Table of a number entered by the user in pretty form 

 */ 
int main(){
int a;
a = 6;
printf("multiplication table of 7\n\n");
printf("6 X 1 =%d \n",a*1);
printf("6 X 2 =%d \n",a*2);
printf("6 X 3 =%d \n",a*3);
printf("6 X  4=%d \n",a*4);
printf("6 X 5 =%d \n",a*5);
printf("6 X  6=%d \n",a*6);
printf("6 X 7 =%d \n",a*7);
printf("6 X 8 =%d \n",a*8);
printf("6 X 9 =%d \n",a*9);
printf("6 X 10 = %d \n",a*10);


printf("\n \n ");
printf("the multiplication table modified version 2.o \n");

int num = 6;
for(int i = 0 ; i<11 ; i++){
    printf("%d X %d  = %d \n", num , i , num*i);
}

return 0;
}