#include<stdio.h>
int main()
{
    int t, p, count, pp;
    char s[1000];
    scanf("%d", &t);
    for(p=0; p<t; p++)
    {
        scanf("%s", &s);
count= 0;
        for(pp=0; s[pp]!='\0'; pp++)
            count++;

        if(count<=10)
            printf("%s\n", s);
        else
            printf("%c%d%c\n", s[0], count-2, s[count-1]);

    }
    return 0;
}

// Author : Sorowar Mahabub, studies B.Sc in CSE, IIUC
