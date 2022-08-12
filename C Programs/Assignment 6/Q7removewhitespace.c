#include <stdio.h>
#include <string.h>
int main()
{
char string[1000];
printf("Enter the string:\n --> ");
scanf("%[^\n]", string);
int length = strlen(string);
for (int index1 = 0; index1 < length; index1++)
{
if (string[index1] == ' ')
{
for (int index2 = index1; index2 <= length; index2++)
{
string[index2] = string[index2 + 1];
}
}
}
puts(string);
return 0;
}