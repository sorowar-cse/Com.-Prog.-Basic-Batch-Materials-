//Example: Program to print first 10 multiples of 10.

#include<stdio.h>
int main()
{
    int a, i;
    a = 5;
    i = 1;
    do
    {
        printf("%d\t", a*i);
        i++;
    }
    while(i <= 10);

    return 0;
}
