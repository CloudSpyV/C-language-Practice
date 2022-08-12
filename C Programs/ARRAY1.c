#include <stdio.h>
int main()
{
    int i,n,m,c;
    printf("Enter array length:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        printf("Enter value:");
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for (m=i+1;m<n;)
        {
            if (a[i]==a[m])
            {
                c+=1;
            }
        }
    }

}