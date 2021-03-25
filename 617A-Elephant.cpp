#include<iostream>

using namespace std;

int x, num = 0;

int main(){
    cin >> x;

    if(x >= 5){
        num = x/5;
        int rem = x%5;

        if(rem > 0){
            num = num + 1;
        }
    }
    else{
        num = 1;
    }
    cout << num << endl;
    return 0;
}