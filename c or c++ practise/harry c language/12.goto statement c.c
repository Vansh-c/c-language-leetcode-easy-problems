// also called jump statement in c used to jump to predefined label .
// it is used to avoid because it causes confusion among fellow programmers in understanding the cod3e 
// generally used when we need to break multiple loops using a single statement at the same time.



#include <stdio.h>

int main()
{
    // label:
    //   printf("we are inside label \n");

    // goto end;

    // printf("hello world \n");
    // goto label;
    // end:
    //   printf("we are at the end");

      printf("\n");
      
      int num;
      for(int i = 0; i<8 ; i++){
        printf("%d \n",i);
        for(int j = 0 ; j<8;j++){
            printf("enter the number enter 0 to exit \n");
            scanf("%d",&num);
            if(num == 0){
                goto end;
            }
        }
      }
      end:
        printf("this is really the end");

    return 0 ;
}