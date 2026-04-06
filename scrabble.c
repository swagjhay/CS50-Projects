#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include<string.h>

int points[] = {1,3,3,2,1,4,2,4,1,8,5,1,3,1,1,3,10,1,1,1,1,4,4,8,4,10};
int calculate_score(string word);

int main(void)
{

    string player_1;
    string player_2;
    player_1 = get_string("Player 1: ");
    int score1 = calculate_score(player_1);
    player_2 = get_string("Player 2: ");
    int score2 = calculate_score(player_2);

    if(score1 > score2)
    {
        printf("Player 1 wins!\n");
    }
    else if(score2 > score1)
    {
        printf("Player 2 wins!\n");
    }
    else
    {
        printf("Tie!\n");
    }
}
int calculate_score(string word)
{
    int score = 0;
    for(int i = 0; i < strlen(word) ; i++)
    {
        char c = toupper(word[i]);
        if (c >= 'A' && c <= 'Z')
        {
            score += points[c - 'A'];
        }
    }
    return score;
}
