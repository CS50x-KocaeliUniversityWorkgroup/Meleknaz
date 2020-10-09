#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int main(int argc, string argv[])
{
    string key = argv[1];
    
    if (argc != 2)
    {
        printf("Usage: ./vigenere keyword\n");
        return 1;
    }
    else
    {
        for (int i = 0, n = strlen(key); i < n; i++)
        {
            if (isalpha(key[i]))
            {
            }
            else
            {   printf("Usage: ./vigenere keyword\n");
                return 1;
            }
        } 
    }

    string plntxt = get_string("plaintext: ");
    
    printf("ciphertext: ");
    if (plntxt != NULL)
    {
        for (int i = 0, j = 0, n = strlen(plntxt); i < n; i++, j++)
        {
        
            if (j > strlen(key) - 1)
            {
                j = 0;
            }
                int c = 0;
                if (isupper(plntxt[i]))
                {
                    c = (((plntxt[i] - 65) + (tolower(key[j]) - 97))%26) + 65;
                    printf("%c", (char)c);
                }
                else if (islower(plntxt[i]))
                {
                    c = (((plntxt[i] - 97) + (tolower(key[j]) - 97))%26) + 97;
                    printf("%c", (char)c);
                }
                else
                {
                    printf("%c", plntxt[i]);
                    j--;
                }
            }                             
        }
        printf("\n");
    
    return 0;
}
