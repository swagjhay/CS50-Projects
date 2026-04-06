#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int bricks;
    //Runs until the user enter value greater than 0
    do
    {
        bricks = get_int("Height: ");
    }
    while(bricks <= 0);
    //Loop
    for(int i = 1; i <= bricks; i++)
    {
        //Print spaces before #
        for(int j = 0; j < bricks - i; j++)
        {
            printf(" ");
        }
        //Print # for the current row
        for(int j = 0; j < i; j++)
        {
            printf("#");
        }
        printf("\n");
    }

}
