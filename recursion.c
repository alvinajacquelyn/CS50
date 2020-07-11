// when your program lets you call that specific function from inside that function, then this concept of calling the function from itself can be termed as recursion
//Example syntax:
#include <cs50.h>
#include <stdio.h>

void recursive_function()
{
recursive_function(); // Here the function calls itself
}
int main()
{
recursive_function();
return 0;
}

//When you implement this recursion concept, you have to be cautious in defining an exit or terminating condition from this recursive function, or else it will continue to an infinite loop

void count_to_ten ( int count )
{
    //we only keep counting if we have a value less than ten
       if ( count < 10 )
       {
           count_to_ten( count + 1 );
       }
}

int main()
{
  count_to_ten ( 0 );
}
