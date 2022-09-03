#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        int n;
        scanf("%d",&n);
        int m=n;
        int x=0;
        while(m>0)
        {
            if((m%10)==4)
                x++;

            m=m/10;
        }
        printf("%d\n",x);
    }
    return 0;
}
