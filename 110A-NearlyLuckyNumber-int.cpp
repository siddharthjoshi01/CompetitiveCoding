#include<iostream>
#include<string>

using namespace std;

long long int n;

int main(){
    
    cin >> n;
    string s = to_string(n);
    int counter = 0;

    for(int i = 0; i<s.length(); i++){
        if(s[i]=='4' or s[i]=='7')
            counter += 1;
    }

    if(counter == 4 or counter == 7){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }

    return 0;
}