#include<stdio.h>

int main()
{
    int Array[]= {0, 1, 7, 8, 0}, i, a;
/*
    //input in array using for loop
    for(int i=0; i<=5; i++)
    {
       scanf("%d", &Array[i]);
    }*/
    //scanf("%d", &a);

    // show array elements using for loop
    printf("The elements of array are:\n");
    for(int i=0; i<6; i++)
        printf("%d      ", Array[i]);

    return 0;
}
