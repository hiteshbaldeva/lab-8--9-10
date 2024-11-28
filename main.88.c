// WRITE A PROGRAM TO COPY ELEMENT OF ONE ARRAY TO ANOTHER ARRAY USING POINTERS. 
#include <stdio.h>
int main()
{
    int n,i,*aptr,*bptr;
    printf("enter the array size: ");
    scanf("%d",&n);
    aptr = (int *)malloc(n*sizeof(int));
    bptr = (int *)malloc(n*sizeof(int));
    printf("enter array 1 elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",(aptr+i));
    }
    for(i=0;i<n;i++)
    {
        printf("%d   ",*(aptr+i));
    }
    printf("\n");
    for(i=0;i<n;i++)
    {
        *(bptr+i)=*(aptr+i);
    }
    printf("copied array :\n");
    for(i=0;i<n;i++)
    {
        printf("%d  ",*(bptr+i));
    }

    
    

  
}