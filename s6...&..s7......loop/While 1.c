// Example: Program to print first 15 natural numbers

#include<stdio.h>
int main( )
{
    int x;
    x = 1;

    while(x<=30)
    {
        x= x+1;
        printf("%d\n",  x);
        /* below statement means, do x = x+1, increment x by 1*/
        x= x+1;
    }

    return 0;
}
