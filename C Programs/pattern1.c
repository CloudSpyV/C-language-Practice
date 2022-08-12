#include <stdio.h>
void main()
{
    int i,j,n,k,l;
    printf("Enter the range of loop:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("*");
    }
    printf("\n");
    for(i=1;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            printf(" ");
        }
        printf("*");
        for(k=0;k<n-i-2;k++)
        {
            printf(" ");
        }
        if(i!=n-1)
        {
            printf("*\n");
        }
    }
}