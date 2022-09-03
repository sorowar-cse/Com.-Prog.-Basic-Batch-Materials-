#include<stdio.h>
int main()
{
    int a,b;
    int x=0;
    scanf("%d%d",&a,&b);
    while(1)
    {
        x++;
        a=a*3;
        b=b*2;
        if(a>b)
        {
            printf("%d\n",x);
            break;
        }

    }
    return 0;
}
