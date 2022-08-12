#include <stdio.h>
#include <string.h>
int main() {
char word[1000];
printf("Enter the word:\n --> ");
scanf("%s", word);
int length = strlen(word);
for (int row = 0; row < length; row++) {
for (int index = 0; index <= row; index++) {
printf("%c", word[index]);
}
printf("\n");
}
return 0;
}