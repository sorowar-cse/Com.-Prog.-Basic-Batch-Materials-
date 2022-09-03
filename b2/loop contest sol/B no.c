#include<stdio.h>
int main()
{
    int n;
    int a,b;
    scanf("%d", &n);
    int x;
    for(x=1; x<=n; x++)
    {
        scanf("%d%d",&a,&b);
        if(a>b)
            printf(">\n");
        else if(a<b)
            printf("<\n");
        else
            printf("=\n");
    }
    return 0;
}
