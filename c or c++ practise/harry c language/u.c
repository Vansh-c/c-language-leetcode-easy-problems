#include <stdio.h>

int main()
{
    int  a = 5 , b = -7 , c = 0 ,d;
    d = ++a && ++b || ++c;
    printf("%d %d %d %d \n",a,b,c,d);
    int a1 = -1 ; 
    int d1 = 0;
    int b2 = 6;
    int c2 = -1;
    int e = ++a1 && ++b2 ||( ++c2 && ++d1);
    printf("%d %d %d %d %d\n",a1,b2,c2,d1,e);

    int y = 1 ; 
    if((y = 2) & (y )){
        printf("True %d \n",y);
    }
    else{
        printf("false %d \n",y);
    }
    return 0;
}