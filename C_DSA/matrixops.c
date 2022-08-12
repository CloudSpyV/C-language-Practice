#include <stdio.h>
//menu driven function to test matrix operations

// Add matrices
int add_matrices()
{
    int m1[3][3], m2[3][3], m3[3][3];
    int i, j;
    printf("Enter the elements of first matrix: \n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d", &m1[i][j]);
        }
    }
    printf("Enter the elements of second matrix: \n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d", &m2[i][j]);
        }
    }
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            m3[i][j] = m1[i][j] + m2[i][j];
        }
    }
    printf("The sum of the matrices is: \n");
    for (i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d ", m3[i][j]);
        }
        printf("\n");
    }
    return 0;
}
// Subtract matrices
int subtract_matrices()
{
    int m1[3][3], m2[3][3], m3[3][3];
    int i, j;
    printf("Enter the elements of first matrix: \n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d", &m1[i][j]);
        }
    }
    printf("Enter the elements of second matrix: \n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d", &m2[i][j]);
        }
    }
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            m3[i][j] = m1[i][j] - m2[i][j];
        }
    }
    printf("The difference of the matrices is: \n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d ", m3[i][j]);
        }
        printf("\n");
    }
    return 0;
}
// Multiply matrices
int multiply_matrices()
{
    int m1[3][3], m2[3][3], m3[3][3];
    int i, j, k;
    printf("Enter the elements of first matrix: \n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d", &m1[i][j]);
        }
    }
    printf("Enter the elements of second matrix: \n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d", &m2[i][j]);
        }
    }
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            m3[i][j] = 0;
            for(k = 0; k < 3; k++)
            {
                m3[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }
    printf("The product of the matrices is: \n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d ", m3[i][j]);
        }
        printf("\n");
    }
    return 0;
}
// Transpose matrix
int transpose_matrix()
{
    int m1[3][3], m2[3][3];
    int i, j;
    printf("Enter the elements of matrix: \n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d", &m1[i][j]);
        }
    }
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            m2[j][i] = m1[i][j];
        }
    }
    printf("The transpose of the matrix is: \n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d ", m2[i][j]);
        }
        printf("\n");
    }
    return 0;
}
int main()
{
    int choice;
    printf("1. Add matrices\n");
    printf("2. Subtract matrices\n");
    printf("3. Multiply matrices\n");
    printf("4. Transpose matrix\n");
    printf("5. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch(choice)
    {
        case 1:
            add_matrices();
            break;
        case 2:
            subtract_matrices();
            break;
        case 3:
            multiply_matrices();
            break;
        case 4:
            transpose_matrix();
            break;
    }
    return 0;
    
}