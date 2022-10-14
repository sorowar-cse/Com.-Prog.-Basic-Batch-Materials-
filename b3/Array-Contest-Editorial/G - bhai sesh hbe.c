#include<stdio.h>
//Author: Cholo Programming Shikhi
int main()
{
    long long int T, i, count = 0,Tallest=0,N;
    scanf("%lld", &T);

    for(i=0; i<T; i++)
    {
        scanf("%lld",&N);
        if(Tallest<N)
        {
            Tallest=N;
            count=1;
        }
        else if(Tallest==N)
        {
            count++;
        }
    }

    printf("%lld",count);

    return 0;
}
