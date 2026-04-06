#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int bricks;
    //Prompt user for height till it is more than 0
    do
    {
        bricks = get_int("Heights : ");
    }
    while (bricks <= 0);

    //Loop through each row

    for (int i = 1; i <= bricks; i++)
    {
        //spaces before left #
        for (int j = 0; j < bricks - i; j++)
        {
            printf(" ");
        }

        //left #
        for (int j = 0; j < i; j++)
        {
            printf("#");
        }
        //gap of two spaces
        printf("  ");

        //right #
        for (int j = 0; j < i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
