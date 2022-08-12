#include <stdio.h>
#include <string.h>
int main()
{
char string[1000], letter[2];
printf("Enter the string:\n --> ");
scanf("%[^\n]", string);
printf("Enter the letter:\n --> ");
scanf("%s", letter);
int length = strlen(string);
int frequency = 0;
for (int index = 0; index < length; index++)
{
if (string[index] == letter[0])
{
frequency++;
}
}
printf("Frequency of %c is %d\n", letter[0], frequency);
return 0;
}