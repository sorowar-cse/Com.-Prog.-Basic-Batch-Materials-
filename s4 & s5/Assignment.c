#include <stdio.h>

int main()
{
    int a = 21;
    int c;

    c =  a;  //      21
    printf("Line 1 - =  Operator Example, Value of c = %d\n", c ); // 21

    c +=  a;  //    42
    printf("Line 2 - += Operator Example, Value of c = %d\n", c ); // 42

    c -=  a;  //    21
    printf("Line 3 - -= Operator Example, Value of c = %d\n", c ); // 21

    c *=  a; //     441
    printf("Line 4 - *= Operator Example, Value of c = %d\n", c ); // 441

    c /=  a;  //     21
    printf("Line 5 - /= Operator Example, Value of c = %d\n", c ); // 21

    c  = 200;
    c %=  a; //     11
    printf("Line 6 - %= Operator Example, Value of c = %d\n", c ); // 11

    /*
    c <<=  2;
    printf("Line 7 - <<= Operator Example, Value of c = %d\n", c );

    c >>=  2;
    printf("Line 8 - >>= Operator Example, Value of c = %d\n", c );

    c &=  2;
    printf("Line 9 - &= Operator Example, Value of c = %d\n", c );

    c ^=  2;
    printf("Line 10 - ^= Operator Example, Value of c = %d\n", c );

    c |=  2;
    printf("Line 11 - |= Operator Example, Value of c = %d\n", c );
*/
    return 0;
}
