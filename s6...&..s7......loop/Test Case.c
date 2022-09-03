#include<stdio.h>
int main ()
{
    int TC, a;
    scanf("%d",&TC);
    int even= 0, odd= 0;

    while (TC--)
    {
        scanf("%d",&a);

        if(a%2==0)
           //even=even+1;
            even++;
        else
            odd++;

        /*
                    if(a>0)
                        pos++;
                    else
                        neg++;
                //printf("%d\n",a);
                */

    }

    printf("%d\n",even);
     printf("%d\n",odd);
    return 0;
}
