#include <stdio.h>

int main ()
{
    srand(time(0));
    int val= rand()%19;
    printf("%d\n", val);
    return 0;
}
