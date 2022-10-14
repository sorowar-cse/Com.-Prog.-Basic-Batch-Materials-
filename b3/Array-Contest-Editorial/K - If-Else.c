#include<stdio.h>
//Author: Cholo Programming Shikhi
int main()
{
    int N;
    scanf("%d",&N);
    int A;
    scanf("%d",&A);

    if(N%500<=A)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }

    return 0;
}
