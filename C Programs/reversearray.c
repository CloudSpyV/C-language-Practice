# include <stdio.h>
int main()
{
    int i,j,n,m;
    printf("Enter array length:");
    scanf("%d",&n);
    int a[n];
    int b[n];
    for(i=0;i<n;i++)
    {
        printf("Enter value:");
        scanf("%d",&a[i]);

    }
    for(i=0;i<n;i++)
    {
        printf("%d,",a[i]);
        

    }
    for(j=0;j<n;j++)
    {
        b[j]=a[n-j-1];
        
    }
    printf("\n");
    for (j=0;j<n;j++)


    {
        printf("%d,",b[j]);
    }

}