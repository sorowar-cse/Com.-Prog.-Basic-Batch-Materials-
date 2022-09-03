#include<iostream>
//#include<bits/stdc++.h>
#include<time.h>
using namespace std;

int main()
{
    //Writing on file
    int n= 100, val;

    FILE *ok= fopen("random_number.txt", "w");

    srand(time(0));
    for(int i= 1; i<=100; i++)
    {
        val= rand()%132;
        fprintf(ok, "%d\n", val);
    }

    fclose(ok);
    
    
    //Reading from file
    int store[132];
    FILE *ok1= fopen("random_number.txt", "r");

    for(int i= 1; i<=100; i++)
    {
        fscanf(ok1, "%d", &store[i]);

        if(i==100)
            cout << store[100] << '.'<< endl;
        else
            cout << store[i] << ", ";
    }

    fclose(ok1);

    return 0;
}