#include<stdio.h>

//return type - Function Name
int even_odd(int n);

int main()
{
    int n,flag;
    printf("\nGoing to check whether a number is even or odd");
    printf("\nEnter the number: ");
    scanf("%d",&n);
    flag = even_odd(n);
    if(flag == 1)
    {
        printf("\nThe number is Even: %d", flag);
    }
    else
    {
        printf("\nThe number is Odd");
    }
}


int even_odd(int n)
{
    if(n%2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
