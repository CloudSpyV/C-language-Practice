#include <stdio.h>
void linearsearch(int *L, int len)
{
    int i=1,n;
    printf("Enter the element to search for: ");
    scanf("%d",&n);
    for (int k=0;k<len;k++)
    {
        if (L[k]==n)
        {
            printf("Element Found at index:\t%d",k);
            return;
        }
    }

    printf("Not found");
}
void binarysearch(int *L, int len)
{
    int i=1,n,LB=0,UB=len,mid=(LB+UB)/2;
    printf("Enter the element to search for: ");
    scanf("%d",&n);
    while (LB < UB)
    {
        if (L[mid]==n)
        {
            printf("Element found at index:\t%d",mid);
            return;
        }
        else if (n<L[mid])
        {
            UB=mid-1;
        }
        else
        {
            LB=mid+1;
        }

        mid=(UB+LB)/2;
    }
}
int main() {
    int ch,len;
    int L[20];
    printf("Choose an option:\n1. Linear Search\n2. Binary Search\n");
    scanf("%d", &ch);

    printf("Enter the length of the list:\n");
    scanf("%d",&len);
    printf("Enter the elements of the list in sorted manner:");
    for (int j=0; j<len; j++)
    {
        scanf("%d",&L[j]);
    }
    switch (ch)
    {
        case 1: 
            linearsearch(L,len);
            break;
        case 2:
            binarysearch(L,len);
            break;
    }

    return 0;

}