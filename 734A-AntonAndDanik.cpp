#include<iostream>
#include<string>

using namespace std;

int n, balance = 0;
string s; 

int main(){
    
    cin >> n;
    cin >> s;

    for(int i = 0; i < n; i++){
        if(s[i] == 'A'){
            balance += 1;
        }
        else{
            balance -= 1;
        }
    }

    if(balance > 0){
        cout << "Anton" << endl;
    }
    else if (balance < 0){
        cout << "Danik" << endl;
    }
    else{
        cout << "Friendship" << endl;
    }

    return 0;
}