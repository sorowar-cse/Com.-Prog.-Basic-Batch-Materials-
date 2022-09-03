#include <iostream>
using namespace std;
int main()
{
    char name[50];
    cout << "Please enter your name: ";
    //cin >> name;
    gets(name);
    cout << "Your name is: " << name << endl;
}
