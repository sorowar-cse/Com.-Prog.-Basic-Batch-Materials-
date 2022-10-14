#include<stdio.h>
//Author: Cholo Programming Shikhi
int main()
{
    int h, n, sum= 0;
    scanf("%d%d",&h,&n);

    int a[n+32]; //n sized array

    //for taking Input
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    //for calculating Sum of array elements
    for(int i=0; i<n; i++)
    {
        sum+= a[i];
    }

    if(sum>=h)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
    return 0;
}
