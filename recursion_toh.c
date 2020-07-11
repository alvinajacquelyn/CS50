// int ‘a’ – for number of disks,
// char ‘from’ – for from peg, char ‘aux’ – for a secondary peg, char ‘to’ – for destination peg

#include <cs50.h>
#include <stdio.h>
#include <math.h>

void toh(int a, char from, char aux, char to )
{

    if (a>0)
    {
        toh(a-1,from, to, aux);
        printf("\nMove disk %d from %c to %c ", a, from, to);
        toh(a-1, aux, from, to);
    }

}

int main()
{
    int n = get_int("Enter number of disks: ");
    toh(n, 'A', 'B', 'C');

    printf("\nNumber of steps : ") ;
    int steps = (pow(2, n) -1 );
    printf("%d\n", steps);

    return 0;
}

// Step1 :Move disks n-1 and smaller from peg A (source) to peg B (spare), using peg C (dest) as a spare.
// By recursively using the same procedure. After finishing this, we'll have all the disks smaller than disk n-1 on peg B.
// Step2: Now, with all the smaller disks on the spare peg, we can move disk n from peg A (source) to peg C (dest).
// Step3 : Finally, we want disks n-1 and smaller moved from peg B (spare) to peg C (dest).
// We do this recursively using the same procedure again.

// MoveTower(disk - 1, source, dest , spare)   // Step 1 above
// move disk from source to dest              // Step 2 above
// MoveTower(disk - 1, spare, source, dest)   // Step 3 above