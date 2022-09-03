#include<stdio.h>
int main()
{
    int a;
    int sum=0;
    scanf("%d",&a);
    int temp=a;
    while(temp!=0)
    {
        sum=sum+(temp%10);
        temp/=10;
    }
    printf("%d\n",sum);
    return 0;
}
