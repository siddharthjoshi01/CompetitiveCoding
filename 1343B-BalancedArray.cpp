#include <iostream>
#include<vector>

using namespace std;

int t;

int main() {
    cin >> t;

    for(int i = 0; i < t; i++){
        int n;
        cin >> n;  //n = 8

        if(n%4 != 0){
            cout << "NO" << endl;
        }

        else{
            cout << "YES" << endl;
            for(int i = 2; i <= n; i+=2){
                cout << i << " ";
            }
            for(int i = 1; i <= n-3; i+=2){
                cout << i << " ";
            }
            cout << n - 1 + (n/2) << endl;
        }
    }
    return 0;
}