#include <stdio.h>
int beginning(int *arr)
{
    int i, a, n=10;
    printf("Enter element to be added in the beginning:");
    scanf("%d",&a);
    
    printf("Original array is:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    
    n++;
    
    for (i = n-1; i >= 0; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = a; 
    
    printf("\nArray after insertion is:\n");
    for (i = 0; i < n ; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}

int position(int *arr)
{
    int i, b, pos, n=10;
    printf("Enter the position at which element is to be added:");
    scanf("%d",&pos);
    printf("Enter the element to be added:");
    scanf("%d",&b);
    
    printf("Original array is:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    n++;
    
    for (i = n-1; i >= pos; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[pos-1] = b;
    
    printf("\nArray after insertion is:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

int end(int *arr)
{
    int i, c, n=10;
    printf("Enter the element to be added in the end:");
    scanf("%d",&c);
    
    printf("Original array is:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    n++;
    
    arr[n-1] = c; 
    
    printf("\nArray after insertion is:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}
int main()
{
  int arr[20]={1,2,3,4,5,6,7,8,9,10}, i, n=10, choice;
  printf("1. Insert element at the beginning\n2. Insert element at any given position\n3. Insert element at the end\nEnter your choice:");
  scanf("%d",&choice);
  switch(choice)
  {
      case 1:beginning(arr);
      break;
      case 2:position(arr);
      break;
      case 3:end(arr);
      break;
      default: printf("INVALID CHOICE");
  }
  return 0;
}