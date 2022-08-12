#include <stdio.h>
#include <string.h>
void stringInput(char[], int);
int main()
{

char sentence[1000], substring[1000], replacement[1000], array[100][100];
printf(("Enter the sentence:\n --> "));
scanf("%[^\n]%*c", sentence);
printf(("Enter the word:\n --> "));
scanf("%s", substring);
printf(("Enter the replacement word:\n --> "));
scanf("%s", replacement);
// Spliting the sentence into words using strtok which splits the string by delimiter.
char *token = strtok(sentence, " ");
int index = 0;
while (token != NULL)
{
if (strcmp(token, substring) != 0)
{
strcpy(array[index], token);
}
else
{
strcpy(array[index], replacement);
}
token = strtok(NULL, " ");
index++;
}
index = 0;
sentence[0] = '\0';
while (array[index][0] != '\0')
{
strcat(sentence, " ");
strcat(sentence, array[index]);
index++;
}
puts(sentence);
return 0;
}
