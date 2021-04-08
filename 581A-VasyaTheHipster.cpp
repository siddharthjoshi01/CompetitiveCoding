//a = red, b = blue
//a = left, b = right

#include<iostream>

int a, b;

using namespace std;

int main(){
    cin >> a >> b;
    cout << min(a,b) << " " << abs(a-b)/2 << endl;
    return 0;
}