#include <stdio.h>
#include <string.h>
void reverseString(char[], int, int);
int main()
{
// Write a program to convert the given string "Hello" to "olleH" using recursion.
char string[1000];
printf("Enter a string:\n --> ");
scanf("%[^\n]", string);
getchar();
reverseString(string, 0, strlen(string) - 1);
puts(string);
printf("\n");
return 0;
}
void reverseString(char string[], int forwardIndex, int backwardIndex)
{
if (forwardIndex >= backwardIndex)
return;
char temp = string[forwardIndex];
string[forwardIndex] = string[backwardIndex];
string[backwardIndex] = temp;
reverseString(string, ++forwardIndex, --backwardIndex);
}