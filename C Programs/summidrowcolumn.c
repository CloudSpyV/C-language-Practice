# include <stdio.h>
int main()
{
    int r,j,c,i,midr,midc,sumr=0,sumc=0;
    printf("Enter The No. Of rows: ");
    scanf("%d",&r);
    printf("Enter The No  Of Columns:");
    scanf("%d",&c);
    midr=r/2;
    midc=c/2;
    int a[r][c];
    for (i=0; i<r;i++)
    {
        for(j=0;j<c; j++)
        {

            printf("Enter The Element:");
            scanf("%d",&a[i][j]);
            
        }        
    }
    for (i=0; i<r;i++)
    {
        printf("\n");
        for(j=0;j<c; j++)
        
        {
            printf("%d ,",a[i][j]);
           
        }
    }
    for (i=0; i<r;i++)
    {
        for(j=0;j<c; j++)
        {
            if (i==midr)
            {
                sumr+=a[i][j];
            }
            if (j==midc)
            {
                sumc+=a[i][j];
            }
            
        } 
    }
    printf("the sum of elements of the middle row is: %d",sumr);       
    printf("the sum of elements of the middle column is: %d",sumc);       

}
