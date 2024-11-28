//WRITE A PROGRAM TO CALCULATE THE SQUARE AND CUBE OF AN ENTERED NUMBER USING POINTER OF A VARIABLE CONTAINING THE ENTERED NUMBER
#include <stdio.h>
int main()
{
    int *a;
    
    a =( int*)malloc(1*sizeof(int));
    printf("enter the number: ");
    scanf("%d",a);
    int square = (*a) * (*a);
    int cube = (*a) * (*a) * (*a) ;
    printf("square of a number =%d\n",square);
     printf("cube of a number =%d",cube);
}