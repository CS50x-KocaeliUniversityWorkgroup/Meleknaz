#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

bool check_key_valid(string key);

int main (int argc, string argv[])
{

    if(argc!=2 || !check_key_valid(argv[1]))
    {
        printf("Usage: ./caesar key\n");
        return 1;
   
    }
    int key = atoi(argv[1]);
    
    string plaintext = get_string("plaintext: ");

    printf("ciphertext: ");
    
    for(int i=0, len = strlen(plaintext); i < len; i++)
    {
    
        char c = plaintext[i];
        
        if (isalpha(c))
        {
            char m = 'A';
            if(islower(c))
                m = 'a';
            
            printf("%c", (c-m+key)%26 + m);
        }
        else
            printf("%c", c);        
    }
    printf("\n");

}
bool check_key_valid(string key)
{   

    for(int i=0, len = strlen(key); i<len; i++)
    {
        if(!isdigit(key[i]))
            return false;
    }
        return true;
}
