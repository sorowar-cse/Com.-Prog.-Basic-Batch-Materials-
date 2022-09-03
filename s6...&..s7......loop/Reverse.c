// Reverse Number
#include<stdio.h>

int main()
{
    int num;
    scanf("%d", &num);

    int tmp= num, ans= 0, r;
    while(tmp>0)
    {
        r= tmp%10;
        ans= (ans*10)+r;
        tmp/= 10;
    }

    printf("After Reverse= %d", ans);
    return 0;
}
