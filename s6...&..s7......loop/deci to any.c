#include<stdio.h>

int main()
{
    int num,numbersystem,remainder,binary,positionalvalue;

    remainder= 0;
    binary= 0;
    positionalvalue= 100;
    printf("Enter a number:: ");
    scanf("%d",&num);
    printf("Enter a numbersystem:: ");
    scanf("%d",&numbersystem);

    while(num)
    {
        remainder=num%numbersystem;
        num=num/numbersystem;

        remainder=remainder*positionalvalue;
        binary=binary+remainder;
        positionalvalue=positionalvalue/10;
    }
    printf("the reverse value is:%d",binary);

    return 0;
}
