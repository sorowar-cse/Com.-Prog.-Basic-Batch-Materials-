#include<stdio.h>
//Author: Cholo Programming Shikhi
int main()
{
    int n,TC;
    scanf("%d",&TC);

    while(TC--)
    {
        scanf("%d",&n);
        int arr[n+32]; //n sized array

        for(int i=0; i<n; i++)
            scanf("%d",&arr[i]);


        int odd= 0, even= 0;
        for(int i=0; i<n; i++)
        {
            if(i%2!=arr[i]%2)
            {
                if(arr[i]%2==1)
                {
                    odd++;
                }
                else
                {
                    even++;
                }
            }
        }
        if(odd!=even)
        {
            printf ("-1\n");
        }
        else
        {
            printf ("%d\n",even);
        }
    }
    return 0;
}
