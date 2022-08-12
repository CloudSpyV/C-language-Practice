#include <stdio.h>
#include <string.h>
int isSubstring(char[], char[]);
int main()
{
char string[1000], substring[1000];
printf("Enter the string:\n --> ");
scanf("%[^\n]%*c", string);
printf("Enter the substring:\n --> ");
scanf("%[^\n]%*c", substring);
int index = isSubstring(string, substring);
if(index != -1)
printf("Yes, it is substring of the given string!");
else
printf("No, it is not substring of the given string");
return 0;
}
int isSubstring(char string[], char substring[])
{
int stringLength = strlen(string);
int substringLength = strlen(substring);
for (int stringIndex = 0; stringIndex < stringLength; stringIndex++)
{
int temp = stringIndex;
for (int substringIndex = 0; substringIndex < substringLength;
substringIndex++)
{
if (string[stringIndex] == substring[substringIndex])
{
stringIndex++;
}
}
if ((stringIndex - temp) == substringLength)
{
return temp;
}
stringIndex = temp;
}
return -1;
}