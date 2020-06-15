#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>


int main(int argc, string argv[])
{

    int add = atoi(argv[1]);


    string plain = get_string("plaintext: ");
    int i;

    for(i = 0; plain[i] != '\0'; ++i) {
        if(plain[i] >= 'a' && plain[i] <= 'z'){
            plain[i] += add ;
            if(plain[i] > 'z') {
				plain[i] = plain[i] - 'z' + 'a' - 1; }
			plain[i] = plain[i] ;
        }

        else if(plain[i] >= 'A' && plain[i] <= 'Z'){
            plain[i] += add ;
		    if(plain[i] > 'Z') {
				plain[i] = plain[i] - 'Z' + 'A' - 1; }
            plain[i] = plain[i] ;
        }
    }

    printf("ciphertext: %s" , plain);
    printf("\n");
    return 0;

}