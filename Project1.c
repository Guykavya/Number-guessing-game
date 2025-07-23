// Random number generator and guessing game using C
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

char startgame;
int main()
{
    printf("Lets start the game\n");
    printf("Enter Y/N:");
    scanf("%c", &startgame);
    if (startgame == 'Y' || startgame == 'y')
    {
        int ask;
        printf("Do you want to take random range or set your own range?\n");
        printf("=1= for random range\n");
        printf("=2= to set range\n");
        printf("=>");
        scanf("%d", &ask);
        if (ask == 1)
        {
            srand(time(NULL));
            int i = 0;
            int guess;
            int count = 0;
            int random = rand() % 10 + 1;

            while (1)
            {

                printf("guess the number between 1 to 10:");
                scanf("%d", &guess);
                count++;
                if (guess < 1 || guess > 10)
                {
                    printf("please enter the number that comes in the range.\n");
                    continue;
                }
                else
                {
                    if (guess > random)
                    {
                        printf("Your guess is a higher than the number, decrease it.\n");
                    }
                    else if (guess < random)
                    {
                        printf("Your guess is lower the number, increase it.\n");
                    }
                    else
                    {
                        printf("Congratulations !!! you guessed the number\n");
                        printf("You took %d chances.\n", count);
                        break;
                    }
                }
            }
        }
        else if (ask == 2)
        {

            srand(time(NULL));
            int count = 0;
            printf("Starting the guessing game, lets set the range for the game\n");
            int max, min, guess;
            printf("Enter the min number of the range:");
            scanf("%d", &min);
            printf("Enter the max number of the range:");
            scanf("%d", &max);
            printf("Now lets begin the game,guess number between %d and %d:\n", min, max);
            int random_num = (rand() % (max - min + 1)) + min;
            while (1)
            {
                printf("guess the number between %d to %d:", min, max);
                scanf("%d", &guess);
                if (guess < min || guess > max)
                {
                    printf("please enter the number that comes in the range.\n");
                    continue;
                }
                else
                {
                    count++;
                    if (guess > random_num)
                    {
                        printf("Your guess is a higher than the number, decrease it.\n");
                    }
                    else if (guess < random_num)
                    {
                        printf("Your guess is lower the number, increase it.\n");
                    }
                    else
                    {
                        printf("Congratulations !!! you guessed the number\n");
                        printf("You took %d chances.\n", count);
                        break;
                    }
                }
            }
        }
    }
    else if (startgame == 'N' || startgame == 'n')
    {
        printf("Exiting the game !!!");
    }
    return 0;
}