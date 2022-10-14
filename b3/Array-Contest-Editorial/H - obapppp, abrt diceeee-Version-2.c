#include<stdio.h>
//Author: Cholo Programming Shikhi
int main()
{
    int n,psum=0,count=0,i;
    scanf("%d",&n);
    int a[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++)
    {
        if(a[i]>0)
        {
            if(a[i]%6==0)
            {
                count++;
                psum+=a[i];
            }
        }
    }
    printf("%d %d",count,psum);

    return 0;
}

