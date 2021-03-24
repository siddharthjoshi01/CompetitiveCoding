#include<iostream>
#include<string>

using namespace std;

int main(){
    int n;
    cin >> n;
    int ans = 0;
    string var;

    for(int i = 0; i < n; i++){
        cin >> var;
        if(var[1]== '+'){
            ++ans;
        } 
        else{
            --ans;
        }
    }
    cout << ans << endl;
    return 0;
}