#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[])
{
    if (argc == 2)
    {
        printf("hello, %s\n", argv[1]);
    }
    else
    {
        printf("hello, world\n");
    }
}
//argc and argv are two variables that our main function will now get, when our program is run from the command line.
//argc is the argument count, or number of arguments
//argv is an array of strings that are the arguments

//argv[0], is the name of our program (the first word typed, like ./hello).
//For example, if we run ./argv David, we’ll get hello, David printed, since we typed in David as the second word in our command.