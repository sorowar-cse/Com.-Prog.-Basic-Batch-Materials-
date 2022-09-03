#include<stdio.h>
int main()
{
    char s[1000001];
    scanf("%s", &s);
    for(int p=0; s[p]!='\0'; p++)
    {
        if(s[p]==',')
            printf(" ");
        if(s[p]>='a' && s[p]<='z')
            printf("%c", s[p]-32);
        else if(s[p]>='A' && s[p]<='Z')
            printf("%c", s[p]+32);
    }
    return 0;
}

//             Author: Sorowar Mahabub,
//            studies B.Sc in CSE, IIUC
