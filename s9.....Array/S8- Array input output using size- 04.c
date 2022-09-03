#include<stdio.h>

int main()
{
    int size, Sum;
    scanf("%d", &size);
    int Array[size], i;

    //input in array using for loop
    for(i= 0; i<size; i++)
    {
        scanf("%d", &Array[i]);
        Sum= Sum+Array[i];
    }
/*
    // show array elements using for loop
    printf("The elements of array are:\n");
    for(i= 0; i<size; i++)
        printf("%d ", Array[i]);
*/
   printf("%d ", Sum);
    return 0;
}
