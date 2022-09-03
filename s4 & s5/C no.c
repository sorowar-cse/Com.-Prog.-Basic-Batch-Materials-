#include<stdio.h>
int main()
{
    int n, TC;
    int P= 0, N= 0, E= 0, O= 0;
    scanf("%d", &TC);

    while(TC--)
    {
        scanf("%d", &n);
        if(n > 0)
            P++;
        else if(n < 0)
            N++;

        if(n % 2 == 0)
        {
            E++;
        }
        else
            O++;
    }
    printf("Even: %d\n", E);
    printf("Odd: %d\n", O);
    printf("Positive: %d\n", P);
    printf("Negative: %d\n", N);

    return 0;
}
