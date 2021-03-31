//if same corresponding digits, the digit is 0; else 1
#include <iostream>
#include<string>

using namespace std;

//int a, b, count = 0;
string a,b; 
int main()
{
    cin >> a;
    cin >> b;

    for(int i = 0; i < a.length(); i++){
        if(a[i] != b[i]){
            cout << 1;
        }
        else{
            cout<< 0;
        }
    }
    return 0;
}