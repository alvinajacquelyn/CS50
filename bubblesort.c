// This algorithm is called bubble sort, where large values “bubble” to the right. The pseudocode for this might look like:
// Repeat n–1 times
//     For i from 0 to n–2
//         If i'th and i+1'th elements out of order
//             Swap them

#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    int i, count, number[30];
    printf("How many numbers are u going to enter?: ");
    scanf("%d",&count);
    //placeholder int uses %d,
    //& tells the compiler that whatever the ‘integer value’ will be supplied to the program at this point,
    //it will be stored in the space allocated as ‘count’ or say, at the address of the variable ‘count’.

    for ( i=0; i< count; i ++)
    {
        scanf("%d", &number[i]);
    }

    //main part of bubble sorting
    for ( i=count-2 ; i>=0 ; i--)
    {
        for(int j=0 ; j<= i ; j++)
        {
            if (number[j] > number[j+1])
            {
                int temp=number[j];
                number[j]=number[j+1];
                number[j+1]=temp; //swap
            }
        }
    }
    printf("Sorted elements: ");
    for ( i = 0; i< count; i++ )
    {
        printf(" %d", number[i] );
    }

}
