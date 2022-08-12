#include <stdio.h>

int main()
{
    int first = 0;
    int second = 1;
    int third;

    int non_fab;
    printf("Enter number of non fabonacci series numbers to be printed : ");
    scanf("%d", &non_fab);

    int count = 0;

    while (count < non_fab)
    {

        third = first + second;
        first = second;
        second = third;

        int diff = second - first;

        if (diff > 1){
            for (int i = first + 1; i < second; i++)
            {
                if (count < non_fab){
                    printf("%d\n", i);
                    count+=1;
                }
                
            }
            
        }

    }
    
  
    return 0;
}