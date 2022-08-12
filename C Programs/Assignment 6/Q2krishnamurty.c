#include <stdio.h>
int factorial(int);
int main()
{
int lowerLimit, upperLimit;
printf("Enter the lower limit:\n --> ");
scanf("%d", &lowerLimit);
printf("Enter the upper limit:\n --> ");
scanf("%d", &upperLimit);
for(int number = lowerLimit; number <= upperLimit; number++){
int sum = 0, temp = number;
while(temp != 0){
int remainder = temp % 10;
sum += factorial(remainder);
temp /= 10;
}
if(sum == number)
printf("%d ", number);
}
return 0;
}
int factorial(int number)
{
if (number == 0)
return 1;
else
return number * factorial(number - 1);
}