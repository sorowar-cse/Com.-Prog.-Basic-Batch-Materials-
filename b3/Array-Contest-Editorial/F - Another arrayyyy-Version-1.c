#include<stdio.h>
//Author: Cholo Programming Shikhi
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,s=0;
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);

        if(a[i]>=0)
            printf("%d ",a[i]+2);
        else
            printf("%d ",a[i]);
    }

    return 0;
}
