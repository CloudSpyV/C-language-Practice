#include <stdio.h>
#include <stdlib.h>


int linearSearch(int* array, int len, int element) {
    for (int i = 0; i < len; i++) {
        if (element == array[i])
            return i;
    }

    return -1;
}

int binarySearch(int* array, int left, int right, int element)
{
    if (right >= left) {
        int mid = left + (right - left) / 2;
 
        if (array[mid] == element)
            return mid;
 
        if (array[mid] > element)
            return binarySearch(array, left, mid - 1, element);
 
        return binarySearch(array, mid + 1, right, element);
    }
 
    return -1;
}

int main() {
    printf("Enter the size of list: ");

    int size;
    scanf("%d", &size);

    int* buff = malloc(sizeof(int) * size);
    
    printf("Enter each element seperated by new line.\n");
    for (int i = 0; i < size; i++) 
        scanf("%d", &buff[i]);


    while (1) {
        
        printf("1. Linear Search\n");
        printf("2. Binary Search\n");
        printf("3. Exit\n\n");


        printf("Enter choice: ");

        int choice;
        scanf("%d", &choice);

        switch(choice) {
            case 1: {
                printf("Enter element to find: ");
                int element;
                scanf("%d", &element);

                int result = linearSearch(buff, size, element);

                if (result == -1)
                    printf("Element not found in array.");
                else
                    printf("Element found at position: %d", result + 1);
                break;
            }

            case 2: {
                printf("Enter element to find: ");
                int element;
                scanf("%d", &element);

                int result = binarySearch(buff, 0, size, element);

                if (result == -1)
                    printf("Element not found in array.");
                else
                    printf("Element found at position: %d", result + 1);

                break;
            }

            case 3: {
            
                break;
            }

            default: {
                printf("Invalid choice.");
                break;
            }

        }
    }

}
