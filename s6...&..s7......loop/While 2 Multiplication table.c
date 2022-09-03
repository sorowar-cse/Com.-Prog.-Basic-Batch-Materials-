//Program to print multiplication table for the given number using while loop in C

#include<stdio.h>

int main()
{

    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    int i=1;
    while(i<=10)
    {
        printf("%d X %d = %d\n", number, i, number * i);
     i++;
    }

    return 0;
}
