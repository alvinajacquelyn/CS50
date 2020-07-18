#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    //open file
    FILE *file = fopen("phonebook.csv", "a"); //fopen is a new function we can use to open a file.
                                              //It will return a pointer to a new type, FILE, that we can read from and write to.
    //The first argument is the name of the file, and the second argument is the mode we want to open the file in
    //(r for read, w for write, and a for append, or adding to).

    //get strings from user
    char *name = get_string("Name: ");
    char *number = get_string("Number: ");

    //print(write) strings to file
    fprintf(file, "%s%s\n", name, number);

    fclose(file)
}

//Pointers in c:
//  pointer is a variable that stores the address of another variable.
//  Unlike other variables that hold values of a certain type, pointer holds the address of a variable
//  Pointer Syntax : data_type *var_name; Example : int *p;  char *p;
//  * is used to denote that “p” is pointer variable and not a normal variable
//  & operator is also known as “Address of” Operator.

