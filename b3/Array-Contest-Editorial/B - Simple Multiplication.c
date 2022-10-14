#include<stdio.h>
//Author: Cholo Programming Shikhi
int main()
{
    int N,v,t;
    scanf("%d",&N);
    for( int i=1; i<=N; i++)
    {
        scanf("%d%d",&v,&t);
        int S= v*t;
        printf("%d\n",S);
    }
    return 0;
}
