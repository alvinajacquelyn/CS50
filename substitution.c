#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(int argc, string argv[])
//The parameters argc and argv provide a representation of the program's command line.
//argc is the number of strings that make up the command line (including the program name),
//and argv is an array that contains those strings.

//use argv[1]
{
    if (strlen(argv[1]) == 26) {
        string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        int i = 0;
        string plain = get_string("plaintext: ") ;
        for (i = 0; i < strlen(argv[1]); i++) {
            char letter = argv[i][0] ;
            char abc = alphabet[i] ;
            int difference = toupper(letter) - abc;

            int j=0;
            for (j = 0; plain[j] != '\0';++j) {
                plain[j] += difference ;
            }
        }

        printf("ciphertext: %s" , plain);
        printf("\n");
        return 0;


    }

}