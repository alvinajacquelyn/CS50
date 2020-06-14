#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string s = get_string("Before: ");
    printf("After:  ");
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            printf("%c", s[i] - 32);
        }
        else
        {
            printf("%c", s[i]);
        }
    }
    printf("\n");
}

//First, we get a string s. Then, for each character in the string, if it’s lowercase (its value is between that of a and z), we convert it to uppercase. Otherwise, we just print it.
//We can convert a lowercase letter to its uppercase equivalent, by subtracting the difference between their ASCII values.
//(We know that lowercase letters have a higher ASCII value than uppercase letters, and the difference is conveniently the same between the same letters, so we can subtract that difference to get an uppercase letter from a lowercase letter.)