# include <stdio.h>
int main()
{
    int i,n,k;
    printf("enter the array length: ");
    scanf("%d",&n);
    int a[n];
    for (i=0;i<n;i++)
    {
        printf("enter value: ");
        scanf("%d",&a[i]);
    }
    for (i=0;i<n;i++)
    {
        if (a[i]%2!=0)
        {
            printf("%d\t",a[i]);
        } 
    }
}