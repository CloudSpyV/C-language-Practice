#include <stdio.h>
int main() {
FILE *filePointer;
filePointer = fopen("student.txt", "a");
int numberOfStudents;
printf("Enter the number of students:\n --> ");
scanf("%d", &numberOfStudents);
for (int index = 0; index < numberOfStudents; index++)
{
char name[1000];
int marks;
printf("Enter the name:\n --> ");
scanf("%s", name);
printf("Enter the marks:\n --> ");
scanf("%d", &marks);
fprintf(filePointer, "%s %d\n", name, marks);
}
fclose(filePointer);
return 0;
}
