#include <stdio.h>

void f (int n)
{
    if (n <=1)
    {
        printf ("A=  %d\n", n);
    }
    else
    {
        f (n/2);
        printf ("B=  %d\n", n%2);
    }
}
int main ()
{
    int a= 120;
    f(a);
    return 0;
}
