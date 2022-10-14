/* Without Array */

#include <stdio.h>
//Author: Cholo Programming Shikhi
int main()
{
    int n;
    scanf("%d",&n);
    int num, sum=0;
    for(int i=0; i<n; i++)
    {
        scanf("%d",&num);
        sum+=num;
    }

    printf("%d\n",sum);
    return 0;
}
