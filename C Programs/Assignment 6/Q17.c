#include <stdio.h>
int main()
{
int size;
printf("Enter the size of the array:\n --> ");
scanf("%d", &size);
int array[size], *ptr = array;
for (int index = 0; index < size; index++)
{
printf("Enter array[%d]: ", index);
scanf("%d", ptr);
ptr++;
}
ptr = array + size - 1;
while (size > 0)
{
printf("%d ", *ptr);
ptr--;
size--;
}
return 0;
}