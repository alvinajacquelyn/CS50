#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string s = get_string("Input:  ");
    printf("Output: ");
    for (int i = 0;s[i] != '\0' ; i++) //for ( init; condition; increment )
    // or swap s[i] != '\0' with i < strlen(s)
    {
        printf("%c", s[i]);

    }
    printf("\n");
}
//We can use the condition s[i] != '\0', where we can check the current character and only print it if it’s not the null character.
//We can also use the length of the string, but first, we need a new library, string.h, for strlen, which tells us the length of a string.