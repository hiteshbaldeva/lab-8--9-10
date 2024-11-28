// WRITE A C PROGRAM USING POINTERS TO FIND THE BIGGEST OF GIVEN LIST OF N INTEGERS
#include <stdio.h>
int main()
{
    int n,i,*aptr;
    printf("enter the number of integers : ");
    scanf("%d",&n);
    aptr =(int*)malloc(n*sizeof(int));
    printf("enter the numbers :");
    for(i=0;i<n;i++)
    {
        scanf("%d",(aptr+i));
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",*(aptr+i));
    }
    int biggest = *(aptr+0);
     for(i=1;i<n;i++)
    {
        if(*(aptr+(i))>biggest)
       { biggest = *(aptr +(i));}
      
    }
      printf("\n biggest number =%d",biggest);
}