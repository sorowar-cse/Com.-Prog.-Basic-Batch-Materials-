#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    if(n % 10==7) //last digit
        printf("Yes\n");
    else if(n/100==7) //first digit
        printf("Yes\n");
    else if((n/10)%10 == 7) //middle digit
        printf("Yes\n");
    else
        printf("No\n");
    return 0;
}
