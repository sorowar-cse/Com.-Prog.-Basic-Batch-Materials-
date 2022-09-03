#include  <stdio.h>

int main()
{
    int i, num;
    int total;
    double average;
    printf ("Enter the value of N: ");
    scanf("%d", &num);
    int array[num];

    printf("Enter %d numbers: \n", num);

    for (i = 0; i < num; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("Input array elements are: ");

    for (i = 0; i < num; i++)
    {
        printf("%d  ", array[i]);
    }


    /*  Summation starts */
    for (i = 0; i < num; i++)
    {
        total+= array[i]; /* this means total=total+array[i]; */
    }


    average = (double)total / (double)num;

    printf("\n\n\nSum of all numbers =  %d\n\n", total);
    printf("Average of all input numbers =  %lf\n", average);

    return 0;
}
