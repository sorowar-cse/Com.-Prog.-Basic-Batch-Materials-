#include<stdio.h>
int main()
{
    int TC;
    int a,b,mod;
    scanf("%d",&TC);


    while(TC--)
    {
        scanf("%d%d",&a,&b);
        mod= a%b;
        printf("%d\n", mod);
    }
    return 0;
}
