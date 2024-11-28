// WRITE A PROGRAM TO FIND LENGTH OF A GIVEN STRING INCLUDING AND EXCLUDING SPACES USING POINTERS. 
#include <stdio.h>
int main()
{
    char *a ;
    a = (char*) malloc(500*sizeof(char));
    printf("enter the string:");
    gets(a);
    puts(a);

    int  count =0;
    int number =0;
    while(*a!='\0')
    {
        count  = count + 1;
        
        if(*a!=' ')
        {
            number = number +1;
        }
        a++;
    }
    printf("length including spaces =%d\n",count);
    printf("length excluding spaces = %d",number);
   
}