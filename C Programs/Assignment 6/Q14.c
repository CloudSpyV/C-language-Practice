#include <stdio.h>
int main()
{
int number1, number2;
printf("Enter the first number:\n --> ");
scanf("%d", &number1);
printf("Enter the second number:\n --> ");
scanf("%d", &number2);
int dividend = 1, lcm;
while(1){
if ((dividend % number1 == 0) && (dividend % number2 == 0)){
lcm = dividend;
break;
}
dividend++;
}
printf("The LCM of %d and %d is: %d", number1, number2, lcm);
return 0;
}
