# include <stdio.h>
float average(int a, int b, int c)
{
    float result;
    result=((float)(a+b+c))/3;
    return(result);
}
int main()
{
    int a,b,c;
    float avg;
    printf("Enter The Three numbers to be added::\t");
    scanf("%d\t%d\t%d",&a,&b,&c);
    avg= average(a,b,c);
    printf("The Required Average is %f",avg);
}
