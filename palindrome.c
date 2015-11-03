#include <stdio.h>
#include <string.h>

int main()
{
    char word[10];
    printf("Enter a word: ");
    scanf("%s", &word);
    
    int i = 0;
    int j = strlen(word) - 1;
    int count = 0;
    
 
 
    for(; i < strlen(word), j >= 0; i++, j--)
    {
        if (word[i] == word[j])
        {
            count++;
        }
        else
        {
            break;
        }
    }

   
    if (count == strlen(word))
    {
        printf("%s is a palindrome", word);
    }
    else
    {
        printf("%s is not a palindrome", word);
    }
 
    return 0;
}