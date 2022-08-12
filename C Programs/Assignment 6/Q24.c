#include <stdio.h>
int main() {
struct student {
char name[20];
int roll;
float marks;
};
int size;
printf("Enter the size of the array:\n --> ");
scanf("%d", &size);
struct student arr[size];
for(int index = 0; index < size; index++){
printf("Enter name:\n --> ");
scanf("%s", arr[index].name);
printf("Enter roll number:\n --> ");
scanf("%d", &arr[index].roll);
printf("Enter marks:\n --> ");
scanf("%f", &arr[index].marks);
}
FILE *fp = fopen("25.txt", "w");
fwrite(arr, sizeof(struct student), size, fp);
fclose(fp);
// Open the file for reading
fp = fopen("25.txt", "r");
fread(arr, sizeof(struct student), size, fp);
for(int index = 0; index < size; index++){
printf("Name: %s\n", arr[index].name);
printf("Roll number: %d\n", arr[index].roll);
printf("Marks: %f\n", arr[index].marks);
}
fclose(fp);
return 0;
}