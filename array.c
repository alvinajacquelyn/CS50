#include <cs50.h>
#include <stdio.h>

float average(int length, int array[]);

int main(void)
{
    // Get number of scores
    int n = get_int("Scores:  ");

    // Get scores
    int scores[n];
    for (int i = 0; i < n; i++)
    {
        scores[i] = get_int("Score %i: ", i + 1);
    }

    // Print average
    printf("Average: %.1f\n", average(n, scores));
}

float average(int length, int array[])
{
    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum += array[i];
    }
    return (float) sum / (float) length;
}

// First, we’ll ask the user for the number of scores they have, create an array with enough ints for the number of scores they have, and use a loop to collect all the scores.
// Then we’ll write a helper function, average, to return a float, or a decimal value. We’ll pass in the length and an array of ints (which could be any size), and use another loop inside our helper function to add up the values into a sum. We use (float) to cast both sum and length into floats, so the result we get from dividing the two is also a float.
//Finally, when we print the result we get, we use %.1f to show just one place after the decimal.