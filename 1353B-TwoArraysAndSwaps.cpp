#include <iostream>
#include <algorithm>
#include <array>

using namespace std;

int t, n, k;

int main(){
    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> n >> k;
        int a[n], b[n];

        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        for(int i = 0; i < n; i++){
            cin >> b[i];
        }

        sort(a, a+n+1);
        sort(b, b+n+1);

        for(int i = 0; i < k; i++){
            if(a[i] < b[n-i+1]){
                a[i] = b[n-i+1];
            }
        }

        int sum = 0;

        for(int i = 0; i < n; i++){
            sum += a[i];
        }

        cout << sum << endl;
    }
    return 0;
}