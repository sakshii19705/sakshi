#include <stdio.h>

int main()

{
    int size,i;

    printf("enter the array's size: ");
    scanf("%d",&size);

    int arr[size];

    printf("enter array's elements:\n");
    for(i=0; i < size; i++)
    {
        printf("a[%d] = , i");
        scanf("%d",&arr[i]);
    }

    printf("negative elements from an array:");
    for(i=0; i < size ; i++)
    {
        if(arr[i] < 0)
        {
            printf("%d", arr[i]);
        }
    }
    printf("\n");

    return 0;

}

   
    