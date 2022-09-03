#include <stdio.h>
int main()
{

    // Data Types & Variable
    /*
    যেভাবে লিখতে হবেঃ
    (প্রথমে ডাটা টাইপ) <স্পেস> (Variable Name) ;
    */

    int a;
    long long int b;
    char c;
    float d;
    double e;

    /*
    Format Specificifier:

    int -> %d
    long long int -> %lld
    char -> %c
    float -> %f
    double -> %lf
    */


    // Value Assign:

    //  1
    int Ami= 32;
    long long int tomra= 101;
    char ajib= '#';
    float vallagena= 32.895216523222; //= 32.89;
    double jaksesh= 90.586436844685522; //= 90.58643684468;
   //printf("%d\n", Ami);


    //      2
    /*
    Ami= 90;
    tomra= 9651;
    ajib= '=';
    */
    // vallagena= 87447.767;
    // jaksesh= 2345434.8765587;
    //printf("%d", Ami);

    //ইনপুটের মূলমন্ত্রঃ scanf("");

    /*
    ইনপুট নিতে যা করতে হবেঃ
    স্ক্যান এফ ত লিখবা, দেন কি করবা?
    ওই যে কোটেশন মার্ক দেখা যায় তার ভিতরে
    Format Specifier লিখে দিবা, তারপর কোটেশনের বাইরে কমা দিবা,
    দেন এটা (&) দিয়ে কোন variable নিতে চাচ্ছ তা লিখবা!
*/

    //  3       Input value:
    /*
    scanf("%d", &Ami);
    scanf("%lld", &tomra);
    scanf("\n%c", &ajib);
    scanf("%f", &vallagena);
    scanf("%lf", &jaksesh);
*/

    //একাদিক মান ইনপুট নিতে-
    //scanf("%d%lld\n %c%f%lf", &Ami, &tomra, &ajib, &vallagena, &jaksesh);
    //scanf("%d%d", &A, &B);
    //printf("%d\n%lld\n%c\n%f\n%.12lf\n",Ami,tomra,ajib,vallagena,jaksesh);


    printf("%d\n", Ami);
    printf("%lld\n", tomra);
    printf("%c\n", ajib);
    printf("%f\n", vallagena);
    printf("%.12lf\n", jaksesh);

      //printf("%d,\n%lld\n%c\n%f\n%.12lf\n",Ami,tomra,ajib,vallagena,jaksesh);
    /*

    // CF Sheet-1 A
        char Name[102] ;
        scanf("%s", Name);

        printf("%s", Name);
        */
    return 0;
}
