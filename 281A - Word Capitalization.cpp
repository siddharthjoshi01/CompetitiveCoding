#include<iostream>

using namespace std;

string a;

int main()
{
    cin >> a;
    a[0] = toupper(a[0]);
    cout << a << endl;
    return 0;
}