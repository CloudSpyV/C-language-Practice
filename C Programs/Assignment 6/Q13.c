#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
char fullname[1000], nameArray[3][1000];
printf("Enter full name:\n --> ");
scanf("%[^\n]%*c", fullname);
char *token = strtok(fullname, " ");
int index = 0;
while (token != NULL)
{
strcpy(nameArray[index], token);
token = strtok(NULL, " ");
index++;
}
if (index == 1)
{
char firstname[1000];
strcpy(firstname, nameArray[0]);
firstname[0] = toupper(nameArray[0][0]);
puts(firstname);
}
else if (index == 2)
{
char lastname[1000];
strcpy(lastname, nameArray[1]);
lastname[0] = toupper(nameArray[1][0]);
printf("%c. %s", toupper(nameArray[0][0]), lastname);
}
else if (index == 3)
{
char lastname[1000];
strcpy(lastname, nameArray[2]);
lastname[0] = toupper(nameArray[2][0]);
printf("%c. %c. %s", toupper(nameArray[0][0]),
toupper(nameArray[1][0]), lastname);
}
return 0;
}
