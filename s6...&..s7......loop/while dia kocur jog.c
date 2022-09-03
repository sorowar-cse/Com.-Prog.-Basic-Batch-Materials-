#include <stdio.h>
int main ()
{
    int tc;
    scanf("%d", &tc);
    for(int i=1; i<=tc; i++)
    {
        int a, b;
        int sum= 0;
        scanf("%d %d", &a, &b);

        sum= a+b;
        printf("case %d: %d\n", i, sum);
    }
}
