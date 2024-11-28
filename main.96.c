 // WRITE A C PROGRAM TO SORT THE GIVEN N NUMBER OF STRINGS IN ASCENDING ORDER USING POINTERS. 
 #include <stdio.h>
 #include <string.h>
 #include <stdlib.h>
 int main()
 {
    int n,i;
    printf("enter the number of strings :");
    scanf("%d",&n);
    getchar();
    char (*s)[100] = (char (*)[100]) malloc(n * 100 * sizeof(char));
    for(i=0;i<n;i++)
    {
        printf("enter the string[%d]",i+1);
        gets(s[i]);
    }
    char *p = (char *) malloc(100 * sizeof(char));
    for(i=0;i<n;i++)
    {
        for(int j=i+1; j<n; j++){
            if(strcmp(s[i],s[j]) > 0)
            {
                strcpy(p,s[i]);
                strcpy(s[i],s[j]);
                strcpy(s[j],p);
            }
        }
    }
    for(int i=0; i<n; i++)
    {
        printf("%s\n",s[i]);
    }
 }