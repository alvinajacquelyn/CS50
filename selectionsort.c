//This algorithm is called selection sort, and we might write pseudocode like this:
// For i from 0 to n–1
//     Find smallest item between i'th item and last item
//     Swap smallest item with i'th item

//smallest element is exchanged with the first element of the unsorted list of elements
//(the exchanged element takes the place where smallest element is initially placed).
//then the second smallest element is exchanged with the second element of the unsorted list of elements and so on until all the elements are sorted

#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // Here i & j for loop counters,
    //temp for swapping,
    //count for total number of elements aka n,
    //number[] to store the input numbers in array.
    // You can increase or decrease the size of number array as per requirement

    int i, j , temp, count, number[30];
    printf("How many numbers are u going to enter?: ");
    scanf("%d",&count);

    for ( i=0; i< count; i ++) //loop to get elements sorted in array
    {
        scanf("%d", &number[i]);
    }

    // Logic of selection sort algorithm
    for (i=0; i< count; i++)
    {
        for (j= i+1; j< count; j++)
        {
            if (number[i] > number[j])
            {
                temp = number[i];
                number[i] = number[j];
                number[j] = temp; //swap
            }
        }
    }

   printf("Sorted elements: ");
   for(i=0 ; i<count ; i++)
   {
      printf(" %d",number[i]);
   }
   printf("\n");
}