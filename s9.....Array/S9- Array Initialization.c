#include <stdio.h>

int main ()
{
    int n[ 10 ]= {1, 32, 77, 41, 67, 89}; /* n is an array of 10 integers */
    int i,j;

    /* initialize elements of array n to 0 */
    for ( i = 0; i < 10; i++ )
    {
        //n[i] = i + 100;  /* set element at location i to i + 100 */
        printf("n[%d] = %d\n", i, n[i] );
    }

    /* output each array element's value */
    /*
    for (j = 0; j < 10; j++ ) {
    printf("n[%d] = %d\n", j, n[j] );
    }
    */

    return 0;
}
