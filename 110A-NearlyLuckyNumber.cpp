#include<iostream>
#include<string>

using namespace std;

string n;

int main(){

    cin >> n;
    int counter = 0;

    for(int i = 0; i<n.length(); i++){
        if(n[i]=='4' or n[i]=='7')
            counter += 1;
    }

    if(counter == 4 || counter == 7){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }

    return 0;
}