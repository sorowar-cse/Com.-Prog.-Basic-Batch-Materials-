#include<stdio.h>

int main()
{
    int Array[5], i;

    //input in array using for loop
    for(i=1; i<=5; i++)
    {
        scanf("%d", &Array[i]);
    }

    // show array elements using for loop
    printf("The elements of array are:\n");
    for(i=1; i<=5; i++)
        printf("%d ", Array[i]);

    return 0;
}
