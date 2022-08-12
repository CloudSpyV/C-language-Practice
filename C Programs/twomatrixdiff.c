# include <stdio.h>
int main()
{
    
    int r1,j1,c1,i1;
    printf("Enter The No. Of rows 1st Matrix: ");
    scanf("%d",&r1);
    printf("Enter The No  Of Columns 1st matrix:");
    scanf("%d",&c1);
    int a1[r1][c1];
    for (i1=0; i1<r1;i1++)
    {
        for(j1=0;j1<c1; j1++)
        {
            printf("Enter The Element:");
            scanf("%d",&a1[i1][j1]);
            
        }        
    }
    int r2,j2,c2,i2;
    printf("Enter The No. Of rows of 2nd matrix: ");
    scanf("%d",&r2);
    printf("Enter The No  Of Columns 2nd matrix:");
    scanf("%d",&c2);
    int a2[r2][c2];
    for (i2=0; i2<r2;i2++)
    {
        for(j2=0;j2<c2; j2++)
        {
            printf("Enter The Element:");
            scanf("%d",&a2[i2][j2]);
            
        }        
    }
    int matrix[r1][r2];
    for (i1=0; i1<r1;i1++)
    {
        for(j1=0;j1<c1; j1++)
        {
           for (i2=0; i2<r2;i2++)
           {
                for(j2=0;j2<c2; j2++)
                {
                    if (i1==i2 & j1==j2)
                    {
                        matrix[i1][j1]=a1[i1][j1]-a2[i2][j2];
                    }    
            
                }        
            }            
        }        
    }
    for (i1=0; i1<r1;i1++)
    {
        printf("\n");
        for(j1=0;j1<c1; j1++)
        
        {
            printf("%d ,",a1[i1][j1]);
           
        }
        
    }
    printf("\n");
    for (i2=0; i2<r2;i2++)
    {
        printf("\n");
        for(j2=0;j2<c2; j2++)
        
        {
            printf("%d ,",a2[i2][j2]);
           
        }
        
    } 
    printf("\n");         



    for (i1=0; i1<r1;i1++)
    {
        printf("\n");
        for(j1=0;j1<c1; j1++)
        
        {
            printf("%d ,",matrix[i1][j1]);
           
        }
    }


     
}