#include <stdio.h>
#include <string.h>
int main()
{
    char str[50]; // size of char string
    printf (" Enter the string: ");
    gets(str); // use gets() function to take string

    printf (" \n Before reversing the string: %s \n", str);
    int i, len, temp;
    len = strlen(str); // use strlen() to get the length of str string

    // use for loop to iterate the string
    for (i = 0; i < len/2; i++)
    {
        // temp variable use to temporary hold the string
        temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
    printf (" After reversing the string: %s", str);
}
