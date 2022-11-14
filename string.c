//basic details about strings

#include <stdio.h>

/* string is kind of character array
   defination : char array_name[size]
   string always ends with null character so the size of string is always > string 
   : if the size of string is [10] then it can store upto 9 characters because last one is null character
   char datatype stores 1 bite storage
   format specifier for string is %s
*/

int main()
{     
    //compile time initialization
        char s1[10]="vipul";                   //maximum size of this string is 10 ("between this double coma is called string literal")
        printf("s1 : %s\n",s1);

        char s2[10]={'v','i','p','u','l'};
        printf("s2 : %s\n",s2);


    //run time initialization (scanf,gets)
    //gets
       char s3[15];
       printf(" enter string s3 : ");
       gets(s3);
       printf("s3 : %s\n",s3);


    //we can use scanf also
        char s4[10];
        printf("enter string s4 : ");
        scanf("%s",s4);                          //for scanf we don't need to use addressof(&) for string 
        printf("s4 : %s\n",s4);  

        /*drawback for scanf is : it doesn't count blank space as a character 
         for ex : you want to store name in string 
                  you use scanf for initialization and i add name like : vipul ahir
                  then it only print vipul as a string
                  that's why we use gets as a alternate
        */

        /*drawback for scanf and gets both : buffer overflow
          char name[5];
          gets(name);
          if i'll type name = vipul ahir 

          but size is only for 4 characters and last null value
          then it'll try to print full name and will go beyond memory
          so it will initialize string in unallocated memory
          that's why memory will overwrite and it'll create problem
        */


       //alternate for printing string is puts
       puts(s1);
       puts(s2);
       puts(s3);
       puts(s4);
       //puts automatically adds new line character so no need to use \n in puts

}
