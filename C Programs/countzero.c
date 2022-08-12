# include <stdio.h>
int main()
{
    int r,j,c,i,zc=0;
    printf("Enter The No. Of rows: ");
    scanf("%d",&r);
    printf("Enter The No  Of Columns:");
    scanf("%d",&c);
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
            if (a[i][j]==0)
            {
                zc+=1;

            }

           
        }
    } 
    printf("The Number OF zeroes in the given matrix is : %d",zc);       

}
