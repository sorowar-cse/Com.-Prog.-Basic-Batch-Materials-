#include<stdio.h>
//Author: Cholo Programming Shikhi
int main()
{
    int N,save=0,sum=0,i;
    scanf("%d",&N);
    int array[N];
    for(i=0; i<N; i++)
    {
        scanf("%d",&array[i]);
        if(array[i]>0)
        {
            if(array[i]%6==0)
            {
                save++;
                sum=sum+array[i];
            }
        }
    }
    printf("%d %d",save,sum);
    return 0;
}
