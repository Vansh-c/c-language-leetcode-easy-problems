


#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
  srand(time(NULL));
  int comp = rand()%3;      //srand takes seed an input and is defined inside stdlib 
  printf("enter 0 for rock , 1 for paper , and 2 for scissor \n");
  int user;
  scanf("%d",&user);

  if((user==0 && comp ==1) || (user==1 && comp == 2) || (user == 2 && comp == 1)){
    printf("you lose , user entered %d and comp entered %d \n",user , comp);
  }

  else if((user == 0 && comp == 2) || (user == 1 && comp == 0) || ( user == 2 && comp == 1)){
    printf("you won , user entered %d and comp entered %d \n",user , comp);
  }

  else if(user == comp){
    printf("the match was a tie");
  }
  

  return 0;


}