#include<iostream>

using namespace std;

int n, count = 1;  //there will atleast be one group as 1 <= n <= 100000
int orient[100000];

int main(){
    cin >> n; 

    for(int i = 0; i < n; i++){
        cin >> orient[i];

    }

    for(int i = 0; i < n-1; i++){
        if(orient[i] != orient[i+1]){
            count += 1;
        }
    }

    cout << count << endl;
    return 0;
}