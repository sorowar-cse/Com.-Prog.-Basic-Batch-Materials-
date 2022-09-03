/* //////////////////////////////////////////////////////////////////////////////////////// */
//                                                                                          //
/*                                   In the name of Allah                                   */
//                                                                                          //
/* //////////////////////////////////////////////////////////////////////////////////////// */







//#include<iostream> //For my Machine
#include<bits/stdc++.h> //For Contest
using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;
#define pb         push_back
#define ppb        pop_back
#define yes        cout << "Yes" << endl
#define no         cout << "No" << endl
#define Yes        cout << "YES" << endl
#define No         cout << "NO" << endl
#define fr0(i,n)   for(ll i= 0; i<n; i++)
#define fr1(i,n)   for(ll i= 1; i<=n; i++)

const int MAXSIZE=1e6+10;

const int MOD=1e9+7;
ll mod(ll a)
{
    a%= MOD;
    if(a<0)
        a+= MOD;
    return a;
}

const double PI = 2*acos(0.0);
#define mset(arr) memset(pq, 0, sizeof(pq)); // to set arr values = 0

// How many digit in a number
ll digit(ll x)
{
    return floor(log10(x))+1;
}

// Digit's sum of a number
ll digit_sum(ll x)
{
    ll sum=0;
    while(x>0)
    {
        sum+=x%10;
        x/=10;
    }
    return sum;
}

// to compare 'double' values
#define EPS    1e-10
bool cmp_double(double a, double b)
{
    if(abs(a-b)<EPS)
        return true;
    else
        return false;
}

int reverse_num(int n)
{
    int tmp=n, ans=0, r;
    while(tmp>0)
    {
        r=tmp%10;
        ans=ans*10+r;
        tmp/=10;
    }
    return ans;
}


ll factorial(ll n)
{
    ll i, ans=1;
    for(i=n; i>1; i--)
    {
        ans*=i;
    }
    return ans;
}


bool vowel(char ch)
{
    ch = tolower(ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
        return true;
    return false;
}


// Check if Leap Year
bool isLeapYear(ll y)
{
    return ( (y%4==0 && y%100!=0) || (y%400==0) );
}


ll power(ll b, ll e)
{
    if(e==0)
        return 1;
    if(e&1)
        return b*power(b*b,e/2);
    return power(b*b,e/2);
}

// To find GCD of 2 Numbers
ll gcd(ll a, ll b)
{
    if (b==0)
        return a;

    return gcd(b,a%b);
}

// To find LCD of 2 Numbers

ll lcm(ll a, ll b)
{
    return (a*b)/gcd(a,b);
}


// Function to check a number is Prime or Not
bool isprime(ll n)
{
    if (n<=1)
        return false;
    if(n<=3)
        return true;

    if( (n%2 == 0) || (n%3 == 0) )
        return false;

    for(ll i= 5; i*i<=n; i= i+6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;

    return true;
}

/*
        // Vector input & output check
        for (int i = 0 ; i  < n ; i++)
            cout << a[i] << " ";
        cout << endl << endl;

 */

/*
     for(ll i= 0; i<n; i++)
         for(ll j= 0; j<n; j++)
             cin >> ar[i][j];
 */









/*                                   || Main Function ||                                    */


int main()
{
    ll a[1032];
    ll n;
    cin >> n;
    for (int i = 0 ; i  < n ; i++)
        cin >> a[i];

    sort(a, a+n);
    for (int i = 0 ; i  < n ; i++)
        cout << a[i] << " ";
    return 0;
}


/*


鑱�

*/




/* //////////////////////////////////////////////////////////////////////////////////////// //


                                      || Sorowar Mahabub ||

                                 Cell: 01521-564157, 01834-756433
                           E-Mail: sorowarmahabub.bsc.cse.iiuc@gmail.com

                     https://www.linkedin.com/in/sorowar-mahabub-bsc-cse-iiuc
                       https://www.facebook.com/sorowarmahabub.bsc.cse.iiuc
                        https://sites.google.com/view/sorowarmahabub/home


                                 Assalamu 'ala manit taba'al huda

// //////////////////////////////////////////////////////////////////////////////////////// */

