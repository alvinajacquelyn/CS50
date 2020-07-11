#include <cs50.h>
#include <stdio.h>

int factorial(int n)
{
    if (n==0)
    {
        return 1; //0! is 1
    }

    return (n * factorial(n-1)); //function calling itself- recursion
}


int main ()
{
    int num, fact;
    num = get_int("Enter number: ");

    fact = factorial(num);  //Calling user defined function

    printf("\nFactorial of %d is : ", num);
    printf("%d\n" , fact);

    return 0;
}
