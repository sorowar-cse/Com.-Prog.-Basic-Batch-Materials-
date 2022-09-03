//Digit Sum


#include<stdio.h>

int main()
{
    int num;
    int sum=0;
    scanf("%d", &num);

    int temp= num;
    while(temp!=0)
    {
        sum= sum+  (temp%10);
        temp= temp/10;
    }

    printf("Sum= %d", sum);
    return 0;
}
