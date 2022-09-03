#include<stdio.h>
int main ()
{
    int count,n;

    scanf("%d",&count);

    while (count--)
    {
        scanf("%d",&n);

        int i;

        for ( i=1; i<=n; i++)
        {
            int m;

            for( m=i; m<=n; m++)
            {
                printf("*");
            }

            printf("\n");
        }
    }
    return 0;
}
