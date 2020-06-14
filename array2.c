//It turns out, in memory, we can store variables one after another, back-to-back. And in C, a list of variables stored, one after another in a contiguous chunk of memory, is called an array.
//For example, we can use int scores[3]; to declare an array of 3 integers.

And we can assign and use variables in an array with:
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Scores
    int scores[3];
    scores[0] = 72;
    scores[1] = 73;
    scores[2] = 33;

    // Print average
    printf("Average: %i\n", (scores[0] + scores[1] + scores[2]) / 3);
}

We can use the const keyword to tell the compiler that the value of N should never be changed by our program. And by convention, we’ll place our declaration of the variable outside of the main function and capitalize its name, which isn’t necessary for the compiler but shows other humans that this variable is a constant and makes it easy to see from the start.

const int N = 3;

int main(void)
{
    // Scores
    int scores[N];
    scores[0] = 72;
    scores[1] = 73;
    scores[2] = 33;

    // Print average
    printf("Average: %i\n", (scores[0] + scores[1] + scores[2]) / N);
}

