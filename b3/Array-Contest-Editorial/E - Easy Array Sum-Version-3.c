/* Using Array */

#include <stdio.h>
//Author: Cholo Programming Shikhi
int main ()
{
    int n,i,sum=0;
    scanf("%d",&n);
    int arr[n+32];
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i=0; i<n; i++)
        sum=sum+arr[i];

    printf ("%d\n",sum);

    return 0;
}
