#include <stdio.h>
int main()
{

    char str[100]; int i, cnt= 0;
    printf("Enter a string: \n");
    scanf("%s",str);

    // '\0' represents end of String
    for(i=0; str[i]!='\0'; i++)
        cnt++;

    printf("\nLength= %d", cnt);

    return 0;
}
