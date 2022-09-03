#include<iostream>
#include<algorithm>
#include<cmath>
#include<conio.h>
#include<math.h>
using namespace std;

double power(double m, int n=2)
{
    return pow(m,n);
}

int main()
{
    double m, Ans;
    int n;

    cin >> m;
    cin >> n;

    if(n==0)
    {
        Ans= power(m);
        cout << "Power of " << m << " is " << Ans << endl;
    }
    else
    {
        Ans= power(m, n);
        cout << "Power of " << m << " is " << Ans << endl;
    }
    return 0;
}
