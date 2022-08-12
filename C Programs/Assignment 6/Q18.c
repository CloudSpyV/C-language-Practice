#include <stdio.h>
int isDistinctElement(int[], int);
int main()
{
int size;
printf("Enter the size of the array:\n --> ");
scanf("%d", &size);
int array[size];
for (int index = 0; index < size; index++)
{
printf("Enter array[%d]: ", index);
scanf("%d", &array[index]);
}
if (isDistinctElement(array, size))
printf("\nGiven array have distinct elements!");
else
printf("\nGiven array does not have distinct elements!");
return 0;
}
int isDistinctElement(int array[], int size)
{
for (int index = 0; index < size; index++)
{
for (int otherIndexes = 0; otherIndexes < size; otherIndexes++)
{
if ((array[index] == array[otherIndexes]) && index !=
otherIndexes)
return 0;
}
}
return 1;
}
