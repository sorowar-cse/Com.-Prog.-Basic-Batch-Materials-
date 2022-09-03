#include<stdio.h>
#include<string.h>

int main()
{
    char s1[50], s2[50];
    printf("\nEnter first string: ");
    scanf("%s",s1);
    printf("\nEnter second string: ");
    scanf("%s",s2);

    //strcpy(s1, "CP Basics Kocu");
    strcpy(s2, s1);

    printf("%s\n", s1);

    return(0);
}
