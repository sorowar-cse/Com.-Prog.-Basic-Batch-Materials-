#include<stdio.h>
//Author: Cholo Programming Shikhi
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,left,right;

    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++)
    {
        if(a[i]==0)
            left=i;
        else
            right=i;
    }
    if(right>left)
        printf("%d",left+1); // plus 1, cause 0 Indexing
    else
        printf("%d",right+1); // plus 1, cause 0 Indexing

    return 0;
}
