#include <stdio.h>
//Author: Cholo Programming Shikhi
int main()
{
    int N,M,X;
    scanf("%d %d %d",&N,&M,&X);
    int A[M];
    for(int i=1; i<=M; i++)
    {
        scanf("%d",&A[i]);
    }
    int c1=0,c2=0;
    for(int i=1; i<X; i++)
    {
        for(int j=1; j<=M; j++)
        {
            if(i==A[j])
            {
                c1++;
            }
        }
    }
    for(int i=X+1; i<N; i++)
    {
        for(int j=1; j<=M; j++)
        {
            if(i==A[j])
            {
                c2++;
            }
        }
    }
    if(c1<=c2)
    {
        printf("%d",c1);
    }
    else
    {
        printf("%d",c2);
    }
    return 0;
}
