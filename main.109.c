#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a,*pa = &a;
    printf("Enter value: ");
    scanf("%d",&a);
    printf("Initial value of a: %d\n",a);
    *pa = 5;
    printf("Changed value of a: %d",*pa);
    return 0;
}