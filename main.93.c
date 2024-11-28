// WRITE A C PROGRAM  USING POINTER TO COUNT THE NUMBERS OF WORDS IN A GIVEN STRING. 
#include <stdio.h>
#include <stdlib.h>
int main()
{
    char *a ;
    a = (char*) malloc(500*sizeof(char));
    printf("enter the string:");
    gets(a);
    puts(a);
    int count = 0;
    while(*a!='\0')
    {
        if(*a == ' ')
        {
            count = count +1;
        
        }
        a++;
         
    }
    printf("number of words = %d",count+1);
}
