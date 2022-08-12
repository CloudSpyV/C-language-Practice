#include <stdio.h>

int main()
{
    int i,n,m;
    printf("Enter array length:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        printf("Enter value:");
        scanf("%d",&a[i]);
    }
    m=0;
    for(i=0;i<n;i++)
    {
        if(a[i]%2!=0)
            m+=a[i];
    }
    printf("%d",m);
}