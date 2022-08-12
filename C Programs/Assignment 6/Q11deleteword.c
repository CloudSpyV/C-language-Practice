int main()
{
char sentence[1000], word[1000];
printf("Enter the sentence:\n --> ");
scanf("%[^\n]%*c", sentence);
printf("Enter the word To Remove:\n --> ");
scanf("%[^\n]%*c", word);
int sentenceLength = strlen(sentence);
int wordLength = strlen(word), wordIndex = 0;
for(int sentenceIndex = 0; sentenceIndex < sentenceLength;
sentenceIndex++){
int temp = sentenceIndex;
for(int wordIndex = 0; wordIndex < wordLength; wordIndex++){
if(sentence[sentenceIndex]== word[wordIndex]){
sentenceIndex++;
}
}
if((sentenceIndex-temp) == wordLength){
for (int index = temp; index < sentenceLength; index++){
sentence[index] = sentence[index+wordLength+1];
}
}
sentenceIndex = temp;
}
puts(sentence);
return 0;
}
