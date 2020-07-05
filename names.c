#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string names[4] = {"emma", "rodrigo", "ben", "mike"};

    for (int i = 0; i< 4; i++)
    {
        if (strcmp(names[i], "emma")==0)    //strcompare returns 0 if 2 strings are a same
        //if (names[i] == "emma") // this will not work vs numbers.c
        //char bool float int can only use '==', cannot for strings
        {
            printf("Found\n");
            return 0; // means success, ends early
        }
    }
    printf("Not found\n");
    return 1; //failure
}

//will get found and not found (conflicting msg)
//blindly Not found is printed, so must add return