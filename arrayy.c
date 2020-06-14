#include <cs50.h>
#include <stdio.h>

int main(void)
{
        string names[4];
        names[0] = "EMMA";
        names[1] = "RODRIGO";
        names[2] = "BRIAN";
        names[3] = "DAVID";

        printf("%s\n", names[0]);
        printf("%c%c%c%c\n", names[0][0], names[0][1], names[0][2], names[0][3]);

}
// result in EMMA
//           EMMA
// printing names[0][4] results in "\0"
//We can print the first value in names as a string, or we can get the first string, and get each individual character in that string by using [] again.
//(We can think of it as (names[0])[0], though we don’t need the parentheses.)

