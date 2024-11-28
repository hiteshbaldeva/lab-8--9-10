//WRITE A C PROGRAM TO COUNT THE NUMBER OF VOWELS IN A STRING USING POINTER. 
#include<stdio.h>
int main()
{
    char *aptr;
    int i,count =0;
    aptr = (char*)malloc(500*sizeof(char) );
    printf("enter the string : ");
    gets(aptr);
    puts(aptr);
    int l =strlen(aptr);
    for(i=0;i<=l;i++)
    {
        switch(aptr[i])
        {
             case'a':
             case'e':
             case'i':
             case'o':
             case'u':
             case'A':
             case'E':
             case'I':
             case'O':
             case'U':
                count = count+1;
                 
        }
        
    }
    printf("number of vowels = %d ",count);
}