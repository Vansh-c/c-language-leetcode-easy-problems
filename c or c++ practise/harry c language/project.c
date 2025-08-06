#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int count = 0;
    int guess_num;
    int score = 50;
    
    printf("enter any number to be guessed between 1 to 5 : \n");
    int chances;
    
    for (chances =1 ; chances <= 5; chances++)
    {
        srand(time(NULL));
        int random_integer = rand() % 5;
        scanf("%d", &guess_num);

        if (guess_num == random_integer)
        {
            printf("you have guessed correct \n");
            break;
        }

        else if (guess_num > random_integer)
        {
            printf("the guessed number is %d greated than generated number %d,try again \n", guess_num, random_integer);
            count++;
        }

        else if (guess_num < random_integer)
        {
            printf("the guessed number %d is less than generated number %d \n", guess_num, random_integer);
            count++;
        }
    }

    int result = score - count*10;

    printf("thanks for playing the game ,your score is %d", result);

    return 0;
}