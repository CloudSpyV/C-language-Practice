#include <stdio.h>
int main()
{
// WAP in C to find the determinant of a matrix.
int matrix[3][3];
printf("Enter the matrix --> \n\n");
for (int row = 0; row < 3; row++)
{
for (int column = 0; column < 3; column++)
{
scanf("%d", &matrix[row][column]);
}
}
int determinant = matrix[0][0] * (matrix[1][1] * matrix[2][2] -
matrix[1][2] * matrix[2][1]) - matrix[0][1] * (matrix[1][0] * matrix[2][2] -
matrix[1][2] * matrix[2][0]) + matrix[0][2] * (matrix[1][0] * matrix[2][1] -
matrix[1][1] * matrix[2][0]);
printf("\nDeterminant: %d\n", determinant);
return 0;
}