#include<iostream>
#include<cstring>
#include<set>

using namespace std;

string s;
set<char> letters; 

int main(){
    getline(cin,s);
    
    for(int i = 0; i < s.length(); i++){
        if(isalpha(s[i])){
            letters.insert(s[i]);
        }
    }

    cout << letters.size() << endl;

    return 0;
}