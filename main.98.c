//WRITE A C PROGRAM TO FIND THE PRODUCT OF 2 MATRICES USING POINTER USING DYNAMIC MEMORY ALLOCATION.
#include <stdio.h>
#include<stdlib.h>
int main()
{
   int i,j,*a[3],*b[3];
   for(i=0;i<3;i++)
  {
    a[i]=(int*)malloc(3*sizeof(int));
   b[i]=(int*)malloc(3*sizeof(int));
   }
   
   
   printf("enter the matrix a elements: \n");
   for(i=0;i<3;i++)
   {
    for(j=0;j<3;j++)
    {
      scanf("%d",(*(a+i)+j));
    }
   }
   
   for(i=0;i<3;i++)
   {
    for(j=0;j<3;j++)
    {
      printf("%d  ",*(*(a+i)+j));
    }
    printf("\n");
   }
   printf("enter the matrix b elements: \n");
   for(i=0;i<3;i++)
   {
    for(j=0;j<3;j++)
    {
      scanf("%d",(*(b+i)+j));
    }
   }
   
   for(i=0;i<3;i++)
   {
    for(j=0;j<3;j++)
    {
      printf("%d",*(*(b+i)+j));
     
    }
    printf("\n");
   }
   printf("matrix multiplication\n");
   
   int k, *c[3];
   
   for(i=0;i<3;i++)
   {
    c[i]=(int*)malloc(3*sizeof(int));
   }
   for(i=0; i<3; i++)
   {
    for(j=0; j<3; j++)
    {
      *(*(c+i)+j) = 0;
    }
   }
   for(i=0;i<3;i++)
   {
    for(j=0;j<3;j++)
   {
    
    for(k=0;k<3;k++)
   {
     *(*(c+i)+j) = *(*(c+i)+j) + *(*(a+i)+k)**(*(b+k)+j);
   }
   }
   }
   for(i=0;i<3;i++)
   {
    for(j=0;j<3;j++)
    {
    printf("%d  ",*(*(c+i)+j));

   }
   printf("\n");
}
}