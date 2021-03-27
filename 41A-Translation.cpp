#include<iostream>
#include<string>

using namespace std;

string s, t; 

int main(){

    cin >> s;
    cin >> t;

    bool flag = true;

    for(int i = 0; i < s.length(); i++){
        if(s[i] == t[s.length()-1-i]){
            flag = true;
            continue;
        }
        else{
            flag = false;
            break;
        }
    }
    
    if(flag == true){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }

    return 0;
}