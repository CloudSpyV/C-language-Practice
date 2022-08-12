#include <stdio.h>
#include <string.h>
#include <ctype.h>
void sort(char[]);
void lwr(char[]);
int main()
{
char string1[1000], string2[1000];
printf("Enter first string:\n --> ");
scanf("%s", string1);
printf("Enter second string:\n --> ");
scanf("%s", string2);
lwr(string1);
lwr(string2);
sort(string1);
sort(string2);
if (strcmp(string1, string2) == 0)
printf("They are Anagram!");
else
printf("They are not Anagram!");
return 0;
}
void sort(char string[])
{
int length = strlen(string);
for (int _ = 0; _ < length - 1; _++)
{
for (int index = 0; index < length - 1; index++)
{
if (string[index] > string[index + 1])
{
char character = string[index];
string[index] = string[index + 1];
string[index + 1] = character;
}
}
}
}
void lwr(char string[])
{
for (int i = 0; i < strlen(string); i++)
{
if (isupper(string[i]))
{
string[i] = tolower((int)string[i]);
}
}
}
