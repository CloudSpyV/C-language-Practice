#include <stdio.h>
#include <string.h>
char character[2];
char *characterFrequency(char[]);
int main()
{
char string[1000];
printf("Enter the string:\n --> ");
scanf("%[^\n]%*c", string);
puts(characterFrequency(string));
return 0;
}
char *characterFrequency(char string[])
{
int maxFrequency = 0, length = strlen(string);
for (int index = 0; index < length; index++)
{
int frequency = 0;
for (int otherIndexes = 0; otherIndexes < length; otherIndexes++)
{
if (string[index] == string[otherIndexes])
{
frequency++;
}
}
if (frequency > maxFrequency)
{
maxFrequency = frequency;
character[0] = string[index];
character[1] = '\0';
}
}
return character;
}