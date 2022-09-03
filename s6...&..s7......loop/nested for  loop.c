//Example: Program to print half Pyramid of numbers

#include<stdio.h>
void main( )
{
    int i, j;
    /* first for loop */
    for(i = 1; i <= 5; i++)
    {

        /* second for loop inside the first */
        for(j = i; j > 0; j--)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}
