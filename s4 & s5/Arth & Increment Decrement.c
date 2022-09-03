#include <stdio.h>

int main()
{
    int a = 21;
    int b = 10;
    int c ;
    /*
    c = a + b; // 31
    printf("Line 1 - Value of c is %d\n", c );
    c = a - b; // 11
    printf("Line 2 - Value of c is %d\n", c );
    c = a * b; // 210
    printf("Line 3 - Value of c is %d\n", c );
    c = a / b; // 2
    printf("Line 4 - Value of c is %d\n", c );
    c = a % b; // 1
    printf("Line 5 - Value of c is %d\n", c );
*/

    c= a++;
    printf("Line 6 - Value of c is %d\n", c ); // 21
    printf("Line 7 - Value of a is %d\n", a ); // 22



    // a= 22
    c = a--;
    printf("Line 8 - Value of c is %d\n", c ); // 22
      printf("Line 9 - Value of a is %d\n", a ); // 21

    return 0;
}











//Ans= (n*(n+1))/2
