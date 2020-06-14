#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height = get_int("Height:" );

    for (int i = 0; i < height; i++) {  // if i = 1 j = 0 first have 2 spaces, 2#
      for (int j = 0; j < height; j++) { //if i = 0 j = 0 height = 4, first have 3 spaces, 1#
          if (height -i - j > 1) {
             printf (" ");
          }
          else {
              printf("#");
          }
      }
      printf("\n");
    }


}