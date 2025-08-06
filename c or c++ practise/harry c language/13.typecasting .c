
#include <stdio.h>

// typecasting syntax : (type) value;
// ex: (int) b;, (int) 44/3 etc

int main()
{
    int a = 3;
    float b = 54;
    printf("The value of a is %d \n",a);
    printf("The value of a is %d \n",(int) b);
    float c = (float) 54/3;
    printf("The value of a is %f \n",c);
    printf("The value of a is %d \n",(int) c);


    return 0;
}