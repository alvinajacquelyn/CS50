//We can think of structs as containers, inside of which are multiple other data types.
//Here, we create our own type with a struct called person, which will have a string called name and a string called number.
//Then, we can create an array of these struct types and initialize the values inside each of them, using a new syntax, . , to access the properties of each person.
//In our loop, we can now be more certain that the number corresponds to the name since they are from the same person element.

#include <cs50.h>
#include <stdio.h>
#include <string.h>

typedef struct
{
    string name;
    string number;
}
person;

int main(void)
{
    person people[4];

    people[0].name = "EMMA";
    people[0].number = "87654321";
    people[1].name = "DAVID";
    people[1].number = "89012345";
    people[2].name = "KAT";
    people[2].number = "80123456";
    people[3].name = "JOHN";
    people[3].number = "98765432";

    //find emma
    for (int i = 0; i<4; i ++)
    {
        if (strcmp(people[i].name, "EMMA")== 0)
        {
            printf("Found\n");
            printf("%s", people[i].number); //%s - Take the next argument and print it as a string
            printf("\n");
            return 0;
        }
    }
    printf("Not found \n");
    return 1;
}