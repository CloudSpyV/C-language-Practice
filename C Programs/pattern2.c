#include <stdio.h>
int main()
{
    int n,i,j,k;
    printf("enter no of lines:");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        printf("\n");
        for (k=n;k>i;k--)
        {
            printf(" ");
            
            
        }
        for (j=0;j<n;j+=1)
            {
            
                printf("*");
            
            }
        
        
        
    }

}