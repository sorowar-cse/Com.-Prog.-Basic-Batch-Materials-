#include <stdio.h>
int main()
{
    int num, flag= 0, j;

    /*  Ask user to input the from/to range
         like 1 to 100, 10 to 1000 etc.  */
    printf("Enter a Number: ");
    //Store the range in variables using scanf
    scanf("%d", &num);

    if(num==0 || num==1)
        printf("Not Prime\n");
    else
    {
        for(j=2; j<=num/2; j++)
        {
            if(num%j==0)
            {
                flag= 1;
                break;
            }
        }

        if(flag==0)
            printf("%d is a Prime Number\n", num);
        else
            printf("Not Prime\n");
    }
    return 0;
}
