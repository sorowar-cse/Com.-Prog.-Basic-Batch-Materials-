#include <stdio.h>

int main()
{

    int a = 1;
    int b = 2;
    int c ;

    if( a == b )
    {
        printf("Line 1 - a is equal to b\n" ); // NA
    }
    else
    {
        printf("Line 1 - a is not equal to b\n" );
    }

    if ( a < b )
    {
        printf("Line 2 - a is less than b\n" ); // HAE
    }
    else
    {
        printf("Line 2 - a is not less than b\n" );
    }

    if ( a > b )
    {
        printf("Line 3 - a is greater than b\n" ); // Na
    }
    else
    {
        printf("Line 3 - a is not greater than b\n" );
    }

    /* Lets change value of a and b */
    a = 15;
    b = 5;

    if ( a <= b )
    {
        printf("Line 4 - a is either less than or equal to  b\n" );
    }

    if ( b >= a )
    {
        printf("Line 5 - b is either greater than  or equal to b\n" );
    }

    return 0;
}
