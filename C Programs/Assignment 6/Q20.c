# include <stdio.h>
int main() {
char sentence[100];
int vowels[5] = {0};
int consonants[26] = {0};
int total = 0;
printf("Enter a sentence:\n --> ");
scanf("%[^\n]", sentence);
getchar();
for (int index = 0; index < 100; index++) {
if (sentence[index] == 'a' || sentence[index] == 'A') {
vowels[0]++;
} else if (sentence[index] == 'e' || sentence[index] == 'E') {
vowels[1]++;
} else if (sentence[index] == 'i' || sentence[index] == 'I') {
vowels[2]++;
} else if (sentence[index] == 'o' || sentence[index] == 'O') {
vowels[3]++;
} else if (sentence[index] == 'u' || sentence[index] == 'U') {
vowels[4]++;
} else if (sentence[index] >= 'a' && sentence[index] <= 'z') {
consonants[sentence[index] - 'a']++;
} else if (sentence[index] >= 'A' && sentence[index] <= 'Z') {
consonants[sentence[index] - 'A']++;
}
}
printf("\nVowels:\n");
for (int index = 0; index < 5; index++) {
printf("%c: %d\n", index + 65, vowels[index]);
}
// print total number of consonants.
for (int index = 0; index < 26; index++) {
if (consonants[index] != 0)
total++;
}
printf("\nTotal number of consonants: %d\n", total);
return 0;
}
