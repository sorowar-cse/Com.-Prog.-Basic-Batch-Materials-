#include <stdio.h>

int main()
{

    int size, i, smallest;

    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int array[size];

    printf("\nEnter %d elements of  the array: \n", size);

    for(i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }


    smallest = array[0];
    
    for (i = 1; i < size; i++)
    {
        if (array[i]<smallest)
            smallest= array[i];
    }

    printf("\nSmallest element in the given array is : %d\n", smallest);

    return 0;

}

