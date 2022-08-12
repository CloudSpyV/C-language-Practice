# include <stdio.h>
int main()
{
    int x,y,sum;
    x=10;
    y=20;
    sum=*(&x)+*(&y);
    printf("The Sum Is %u",sum);
}