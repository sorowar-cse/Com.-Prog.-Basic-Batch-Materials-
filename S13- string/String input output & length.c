#include<stdio.h>
int main()
{
    char s[1000];
    scanf("%s", &s);

    int l1,l2;
    l1=strlen(s);
    printf("%d ", l1);

    printf("%s ", s);

    return 0;
}
