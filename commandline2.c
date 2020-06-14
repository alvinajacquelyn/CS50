#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("missing command-line argument\n");
        return -1;
    }
    printf("hello, %s\n", argv[1]);
    return 0;
}
// we can indicate errors in our program by returning a value from our main function (as implied by the int before our main function).
//By default, our main function returns 0 to indicate nothing went wrong, but we can write a program to return a different value

//return 0 statement tell the caller function (in case of main, caller is OS) that the called function have returned a success status.
//Any other value, positive or negative, notifies some sort of failure and requires immediate attention of the programmer.