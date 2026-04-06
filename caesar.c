#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    //if no more argument or more than one -> print error and return 1
    if(argc!=2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    //check character is not a decimal digit
    for(int i = 0; argv[1][i]!='\0'; i++)
    {
        if(!isdigit(argv[1][i]))
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }
    //use key to rotate characters (convert string to integer)
    int k = atoi(argv[1]);
    //handle large keys| Even if k > 26 wrap around alphabet
    k = k % 26;
    //prompr user for plaintext
    string plaintext = get_string("plaintext:  ");
    //print ciphertext
    printf("ciphertext: ");
    for(int i = 0; plaintext[i]!= '\0'; i++)
    {
        //store current caracter
        char c = plaintext[i];
        if(isupper(c))
        {
            //for uppercase
            printf("%c",((c - 'A' + k) % 26) + 'A');
        }
        else if(islower(c))
        {
            //for lowercase
            printf("%c",((c - 'a' + k) % 26) + 'a');
        }
        else
        {
            printf("%c",c); //leave unchanged
        }
    }
    printf("\n");
    return 0;
}
