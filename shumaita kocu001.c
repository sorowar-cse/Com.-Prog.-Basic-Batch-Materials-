#include <stdio.h>
int main ()

{
    int n, cnt= 0, sum= 0;
    scanf("%d", &n);
    while(n--)
    {
        int a;
        scanf("%d", &a);

        if(a==3 || a==5)
        {
            cnt++;
            sum+= a;
        }
    }
    printf("%d\nSum= %d", cnt, sum);
}
