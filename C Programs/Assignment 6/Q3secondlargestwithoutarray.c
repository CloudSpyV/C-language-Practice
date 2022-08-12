#include <stdio.h>
int main()
{
int size, largest = 0, secondLargest = 0;
printf("Enter the size of the list:\n --> ");
scanf("%d", &size);
printf("Enter the list:\n");
while (size > 0)
{
int number;
printf(" --> ");
scanf("%d", &number);
if (number > largest)
{
secondLargest = largest;
largest = number;
}
else if (number > secondLargest)
{
secondLargest = number;
}
size--;
}
printf("Largest: %d\n", largest);
printf("Second largest: %d\n", secondLargest);
return 0;
}
