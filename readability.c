#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>



//index = 0.0588* L - 0.296 * s - 15.8

int main(void)
{
    string text = get_string("Text: ");
    int letters = 0;
    int words = 1; //start at 1 because last word doesn't end with 0
    int sentences = 0;
    int length = strlen(text);

    for(int i = 0; i < length; i++)
    {
        if(isalpha(text[i]))
        {
            letters++;
        }
        else if(text[i] == ' ')
        {
            words++;
        }
        else if(text[i] == '.' || text[i] == '!' || text[i] == '?')
        {
            sentences++;
        }
    }
    float l = ((float)letters/words)* 100;
    float s = ((float)sentences/words)* 100;
    float index = 0.0588 * l - 0.296 * s - 15.8;
    int grade = round(index);
    if(grade < 1)
    {
        printf("Before Grade 1\n");
    }
    else if(grade >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n",grade);
    }
}


