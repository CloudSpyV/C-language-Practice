#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    if (argc <= 4 && argc != 0)
    {
        int largest = 0;
        for (int i = 1; i < argc; i++)
        {
            int number = atoi(argv[i]);
            if (number > largest){
                largest = number;
            }
        }
    printf("%d\n", largest);
    }
    return 0;
}