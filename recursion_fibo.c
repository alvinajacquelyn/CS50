#include <cs50.h>
#include <stdio.h>

int fibo(int n)
{

    if (n>1 ) // general case
    {
        return fibo(n-1) +fibo (n-2);
    }

    return n; // base case


}

int main()
{
    int elem = get_int("Enter number of elements : ");

    printf("\nFibonacci sequence : ");
    for (int i=0; i<elem; i++)
    {
        printf("%d ", fibo(i));
    }
    printf("\n");
    return 0;
}