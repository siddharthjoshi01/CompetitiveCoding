#include<iostream>
#include<algorithm>

using namespace std;

int n;

int main(){
    cin >> n;

    int out[n], in[n];
    int cap[n] = {};
    int diff[n] = {};

    for(int i = 0; i < n; i++){
        cin >> out[i] >> in[i];
        diff[i] = -out[i] + in[i];
    }
    
    cap[0] = diff[0];

    for(int i = 1; i < n; i++){
        cap[i] = cap[i-1] + diff[i];
    }
    int size = sizeof(cap)/sizeof(cap[0]);

    cout << *max_element(cap, cap+size) << endl;
}