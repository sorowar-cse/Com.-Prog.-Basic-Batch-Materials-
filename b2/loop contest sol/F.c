#include<stdio.h>
int main()
{
    int T;
    int n,m,sum;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d%d",&n,&m);
        sum=n+m;
        printf("%d\n",sum);
    }
    return 0;
}
