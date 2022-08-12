#include <stdio.h>
void main()
{
    int n,i,q=0,d;
    printf("Enter the dividend: ");
    scanf("%d",&n);
    printf("Enter the divior: ");
    scanf("%d",&d);
    while(n>=d)
    {
        q+=1;
        n=n-d;
    }
    printf("Quotient is %d",q);
}