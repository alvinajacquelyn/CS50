#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int numbers[6] = {4, 8, 15, 16, 23, 42}; //statically initialized array

    for (int i=0; i< 6; i ++ ) // (init; condition; increment)
    // i want to search for the number 50
    {
        if (numbers[i] == 50)
        {
            printf("Found\n");
        }
    }
    printf("Not Found\n");
}
 //Algorithm: linear search
