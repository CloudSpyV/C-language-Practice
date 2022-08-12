#include <stdio.h>
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
for (int index = 0; index < size / 2; index++)
{
int temp = array[index];
array[index] = array[size - index - 1];
array[size - index - 1] = temp;
}
for (int index = 0; index < size; index++)
{
printf("%d ", array[index]);
}
return 0;
}
