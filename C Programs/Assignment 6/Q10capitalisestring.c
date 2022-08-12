#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main()
{
char string[1000];
printf("Enter the string:\n --> ");
scanf("%s", string);
int length = strlen(string);
for (int index = 0; index < length; index++)
{
string[index] = toupper(string[index]);
}
puts(string);
return 0;
}
