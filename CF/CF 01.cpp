
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc; cin >> tc;
    while(tc--)
    {
        string ok;
        cin >> ok;

        int l= ok.length();
        if(l==2)
            cout << ok[1] << endl;
        else
        {
            sort(ok.begin(), ok.end());
            cout << ok[0] << endl;
        }
    }
    return 0;
}
