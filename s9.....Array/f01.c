#include<stdio.h>
int main()
{
    int N = 32, Sum, a,b;
    int i;
    int Array[N];
    a = 1;
    b = 1;
    printf("%d\t%d\t", a,b);
    for(i = 0; i < N - 2; i++)
    {
        Sum = a + b;
        a = b;
        b = Sum;
        Array[i] = Sum;
    }
    for(i = 0; i < N - 2; i++)
    {
        printf("%d\t", Array[i]);
    }
    return 0;
}
