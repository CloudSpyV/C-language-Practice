#include <stdio.h>
int main()
{
    int n,i,j,c=0;
    printf("Enter array limit: ");
    scanf("%d",&n);
    int a[n],b[n];
    for(i=0;i<n;i++)
    {
        printf("Enter element: ");
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        int k,t=0;
        for(k=0;k<n;k++)
        {
            if(a[i]==b[k])
            {
                t=1;
                break;
            }
        }
        if(t!=1)
        {
            b[c]=a[i];
            c+=1;
        }
    }
    for(i=0;i<c;i++)
    {
        int count = 0;
        int j;
        for(j=0;j<n;j++)
        {
            if(a[j]==b[i])
            {
                count+=1;
            }
        }
        printf("%d : %d\n",b[i],count);
    }   
}