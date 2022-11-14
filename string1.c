// program to find length of string
//  with pre defined function - strlen   which is predefined in <string.h>  (excluding null character)

#include <stdio.h>
#include <string.h>
int main()
{
    unsigned int count;
    char name[30];
    printf("Enter Name : ");
    gets(name);
    puts(name);
    count = strlen(name);                                 //we are storing length size in count variable
    printf("length of string : %d",count);
}