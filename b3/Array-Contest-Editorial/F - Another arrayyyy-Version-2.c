#include<stdio.h>
//Author: Cholo Programming Shikhi
int main()
{
    int p,i,ok;
    scanf("%d",&p);
    int a[p];

    for(i=0; i<p; i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0; i<p; i++)
    {
        if(a[i]>=0)
        {
            ok=a[i]+2;
            printf("%d ",ok);
        }
        else
        {
            ok=a[i];
            printf("%d ",ok);
        }
    }

    return 0;
}
